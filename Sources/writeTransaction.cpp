//
// Created by aless on 23/02/2021.
//

#include <fstream>
#include <iostream>
#include "../Headers/BankAccount.h"
#include "../Headers/Accreditation.h"

bool writeTransaction(BankAccount* bankAccount, Transaction* transaction){

    std::fstream file;
    file.open(FILE_PATH, std::fstream::app);

    if (file.is_open()) {
        //detects if the transaction is a payment/accreditation to write it on the file
        if(dynamic_cast<Accreditation*>(transaction))
            file << "Accedito " << std::endl;
        else
            file << "Pagamento " << std::endl;

        file << "ID: " << transaction->getId() << std::endl;
        file << "Data e ora: " << transaction->getDate() << std::endl;
        file << "Descrizione: " << transaction->getDescription() << std::endl;
        file << "Mittente: " << transaction->getAddresser() << std::endl;
        file << "Destinatario: " << transaction->getAddressee() << std::endl;
        file << "Somma: " << transaction->getAmount() << std::endl;
        file << "Bilancio attuale: " << bankAccount->getBalance() << std::endl;
        file << "------------------------------------------------------" << std::endl;

        file.close();
        return true;
    } else
        std::cout << "Impossibile scrivere la transazione, errore apertura file!" << std::endl;

    file.close();
    return false;
}