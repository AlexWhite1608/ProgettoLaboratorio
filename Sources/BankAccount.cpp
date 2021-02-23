//
// Created by aless on 18/02/2021.
//

#include <iostream>
#include "../Headers/BankAccount.h"
#include "../Headers/randomString.h"
#include "../Headers/FileManagement.h"

BankAccount::BankAccount(const std::string &id, const std::string &iban, float balance) : id(id), iban(iban), balance(balance) {
    FileManagement file;
    file.createFile();
}

void BankAccount::BankAccount::createAccount(const std::string name, ClientType clientType, Transaction *initialTransaction) {

    //generation of the new id and iban code
    id = randomString(ID_LENGTH);
    iban = randomString(IBAN_LENGTH);

    //the initial transaction requires a minimal sum to initialize the balance
    //refresh the balance
    balance = initialTransaction->execute("Transazione iniziale", name, "Banca", clientType);
    transactions.push_back(initialTransaction);

    FileManagement fileManagement;
    fileManagement.writeTransaction(initialTransaction);
}

void BankAccount::doTransaction(Transaction *transaction, float sum, const std::string &description, const std::string &addresser,
                                const std::string &addressee) {
    balance += transaction->execute(sum, description, addresser, addressee);
    transactions.push_back(transaction);
    transaction->printTransaction();

    FileManagement fileManagement;
    fileManagement.writeTransaction(transaction);
}



