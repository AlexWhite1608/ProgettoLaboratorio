//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "Transaction.h"
#include "clientType.h"

#ifndef PROGETTO_LABORATORIO_BANKACCOUNT_H
#define PROGETTO_LABORATORIO_BANKACCOUNT_H

class BankAccount {

public:
    BankAccount(const std::string &id, const std::string &iban, float balance,
                const std::vector<Transaction*> &transactions);

    //when you create a new bank account it return the ID of the account
    std::string createAccount(const std::string name, ClientType clientType, Transaction* initialTransaction);

    bool deleteAccount(std::string id);

    bool updateAccount(std::string id);

    bool doTransaction(Transaction* transaction);

private:
    std::string id;
    std::string iban;
    float balance;
    std::vector<Transaction*> transactions;

};


#endif //PROGETTO_LABORATORIO_BANKACCOUNT_H
