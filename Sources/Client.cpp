//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"

Client::Client(const std::string &name, ClientType clientType, BankAccount* &bankAccount) : name(
        name), clientType(clientType), bankAccount(bankAccount) {}

bool Client::createBankAccount(const std::string name, ClientType clientType, Transaction* initialTransaction){

    BankAccount* bankAccount = new BankAccount();
    bankAccount->createAccount(name, clientType, initialTransaction);

}

bool Client::doTransaction(Transaction *transaction, float sum) {

}

