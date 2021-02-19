//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"

Client::Client(const std::string &name, ClientType clientType, const std::vector<BankAccount*> &bankAccounts) : name(
        name), clientType(clientType), bankAccounts(bankAccounts) {}

bool Client::createBankAccount(const std::string name, ClientType clientType, Transaction* initialTransaction){

    BankAccount* bankAccount = new BankAccount();
    bankAccount->createAccount(name, clientType, initialTransaction);
    bankAccounts.push_back(bankAccount);
}

