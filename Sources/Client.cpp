//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"

Client::Client(const std::string &name, ClientType clientType, BankAccount* &bankAccount) : name(
        name), clientType(clientType), bankAccount(bankAccount) {}

void Client::createBankAccount(const std::string name, ClientType clientType, Transaction* initialTransaction){

    bankAccount = new BankAccount();
    bankAccount->createAccount(name, clientType, initialTransaction);

}

void Client::doTransaction(Transaction *transaction, float sum) {
    bankAccount->doTransaction(transaction, sum);
}

