//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "BankAccount.h"
#include "clientType.h"

#ifndef PROGETTO_LABORATORIO_CLIENT_H
#define PROGETTO_LABORATORIO_CLIENT_H

class Client {

public:
    Client(const std::string &name, ClientType clientType, BankAccount* &bankAccount);

    //must add the new bank account in the vector
    void createBankAccount(const std::string name, ClientType clientType, Transaction* initialTransaction);

    //bool deleteBankAccount(std::string id);

    void doTransaction(Transaction* transaction, float sum);

    bool doAccountStatement(std::string fromDate, std::string toDate); //esegue estratto conto

private:
    std::string name;
    ClientType clientType;
    BankAccount* bankAccount;

};

#endif //PROGETTO_LABORATORIO_CLIENT_H
