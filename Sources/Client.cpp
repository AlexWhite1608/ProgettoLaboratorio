//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"
#include "../Headers/FileManagement.h"

Client::Client(const std::string &name, ClientType clientType, BankAccount* bankAccount) : name(
        name), clientType(clientType), bankAccount(bankAccount) {}

void Client::createBankAccount(BankAccount* bankAccount, Transaction* initialTransaction){
    bankAccount->createAccount(name, clientType, initialTransaction);

}

void Client::doTransaction(BankAccount* bankAccount, Transaction *transaction) {
    bankAccount->doTransaction(transaction, transaction->getAmount(), transaction->getDescription(), transaction->getAddresser(), transaction->getAddressee());
}

bool Client::doAccountStatement() {

    FileManagement fileManagement;
    if(fileManagement.readAll())
        return true;
    else
        return false;
}

