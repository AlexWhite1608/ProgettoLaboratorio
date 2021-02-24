//
// Created by aless on 18/02/2021.
//

#include <iostream>
#include <fstream>
#include <direct.h>
#include "../Headers/BankAccount.h"
#include "../Headers/randomString.h"
#include "../Headers/writeTransaction.h"

BankAccount::BankAccount(const std::string &id, const std::string &iban, float balance) : id(id), iban(iban), balance(balance) {

    _mkdir("..\\OutputFiles"); //it creates the dir that contains the account statement

    std::fstream file("..\\OutputFiles\\AccountStatement.txt");
    file.close();
    file.open("..\\OutputFiles\\AccountStatement.txt");

    if(file.is_open()) {
        file << "ID del conto: " << this->getId() << std::endl;
        file << "IBAN del conto: " << this->getIban() << std::endl;
        file << "Bilancio iniziale: " << this->getBalance() << std::endl;
        file << "------------------------------------------------------" << std::endl;
    }

    file.close();
}

void BankAccount::BankAccount::createAccount(const std::string name, ClientType clientType, Transaction *initialTransaction) {

    //generation of the new id and iban code
    id = randomString(ID_LENGTH);
    iban = randomString(IBAN_LENGTH);

    //the initial transaction requires a minimal sum to initialize the balance
    //refresh the balance
    balance = initialTransaction->execute("Transazione iniziale", name, "Banca", clientType);
    transactions.push_back(initialTransaction);

    writeTransaction(this, initialTransaction);
}

void BankAccount::doTransaction(Transaction *transaction, float sum, const std::string &description, const std::string &addresser,
                                const std::string &addressee) {
    balance += transaction->execute(sum, description, addresser, addressee);
    transactions.push_back(transaction);
    transaction->printTransaction();

    writeTransaction(this, transaction);
}



