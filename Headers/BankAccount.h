//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "Transaction.h"
#include "clientType.h"

const unsigned short int INITIAL_TRANSACTION_SUM = 100; //the minimum sum required to open a new bank account
const unsigned short int ID_LENGTH = 8; //the length of the ID code of the bank
const unsigned short int IBAN_LENGTH = 27; //the length of the IBAN code of the bank

#ifndef PROGETTO_LABORATORIO_BANKACCOUNT_H
#define PROGETTO_LABORATORIO_BANKACCOUNT_H

class BankAccount {

public:
    BankAccount(const std::string &id, const std::string &iban, float balance,
                const std::vector<Transaction*> &transactions);

    BankAccount(){};

    //when you create a new bank account it return the ID of the account
    void createAccount(const std::string name, ClientType clientType, Transaction* initialTransaction);

    //bool deleteAccount(std::string id);

    bool updateAccount(std::string id);

    void doTransaction(Transaction* transaction, float sum);

private:
    std::string id;
    std::string iban;
    float balance;
    std::vector<Transaction*> transactions;

};


#endif //PROGETTO_LABORATORIO_BANKACCOUNT_H
