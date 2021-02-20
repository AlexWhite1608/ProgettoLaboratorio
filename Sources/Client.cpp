//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"
#include "../Headers/FileManagement.h"

Client::Client(const std::string &name, ClientType clientType, BankAccount* &bankAccount) : name(
        name), clientType(clientType), bankAccount(bankAccount) {}

void Client::createBankAccount(const std::string name, ClientType clientType, Transaction* initialTransaction){

    bankAccount = new BankAccount();
    bankAccount->createAccount(name, clientType, initialTransaction);

}

void Client::doTransaction(Transaction *transaction, float sum, const std::string &description, const std::string &addresser,
                           const std::string &addressee) {
    bankAccount->doTransaction(transaction, sum, description, addresser, addressee);
}

bool Client::doAccountStatement() {

    FileManagement fileManagement;
    if(fileManagement.readAll())
        return true;
    else
        return false;
}

