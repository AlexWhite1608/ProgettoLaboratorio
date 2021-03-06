//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "Transaction.h"
#include "clientType.h"
#include "constantValues.h"

#ifndef PROGETTO_LABORATORIO_BANKACCOUNT_H
#define PROGETTO_LABORATORIO_BANKACCOUNT_H

class BankAccount {

public:
    BankAccount(const std::string &id, const std::string &iban, float balance);

    BankAccount(){};

    //when you create a new bank account it return the ID of the account
    void createAccount(const std::string name, ClientType clientType, Transaction* initialTransaction);

    //bool deleteAccount(std::string id);

    void doTransaction(Transaction* transaction, float sum, const std::string &description, const std::string &addresser,
                       const std::string &addressee);

    const std::string &getId() const {
        return id;
    }

    const std::string &getIban() const {
        return iban;
    }

    float getBalance() const {
        return balance;
    }

private:
    std::string id;
    std::string iban;
    float balance;
    std::vector<Transaction*> transactions; //FIXME trovagli un'utilità!

};


#endif //PROGETTO_LABORATORIO_BANKACCOUNT_H
