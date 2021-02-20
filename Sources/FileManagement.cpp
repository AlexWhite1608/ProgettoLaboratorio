//
// Created by aless on 18/02/2021.
//

#include "../Headers/FileManagement.h"
#include "../Headers/Transaction.h"
#include "../Headers/BankAccount.h"
#include "../Headers/constantValues.h"
#include <fstream>
#include <iostream>

FileManagement::FileManagement() :
        filePath(FILE_PATH) {

    this->createFile();
}

bool FileManagement::writeTransaction(Transaction *transaction) {

    std::fstream file;
    file.open(filePath);

    if (file.is_open()) {
        file << "ID: " << transaction->getId() << std::endl;
        file << "Data e ora: " << transaction->getDate() << std::endl;
        file << "Descrizione: " << transaction->getDescription() << std::endl;
        file << "Mittente: " << transaction->getAddresser() << std::endl;
        file << "Destinatario: " << transaction->getAddressee() << std::endl;
        file << "Somma: " << transaction->getAmount() << std::endl;
        file << "------------------------------------------------------" << std::endl;

        file.close();
        return true;
    } else
        std::cout << "Impossibile scrivere la transazione, errore apertura file!" << std::endl;

    file.close();
    return false;
}

bool FileManagement::readAll() {

    std::fstream file;
    file.open(filePath);
    std::string line;

    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            std::cout << line << '\n';
        }
        file.close();
    } else
        std::cout << "Impossibile scrivere la transazione, errore apertura file!" << std::endl;

    return false;
}

bool FileManagement::createFile() {
    std::fstream file;
    file.open(filePath);

    if(file.is_open()){
        BankAccount bankAccount;
        file << "ID del conto: " << bankAccount.getId() << std::endl;
        file << "IBAN del conto: " << bankAccount.getIban() << std::endl;
        file << "Bilancio attuale: " << bankAccount.getBalance() << std::endl;
        file << "------------------------------------------------------" << std::endl;
        return true;
    } else
        return false;
}
