//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "Transaction.h"

#ifndef PROGETTO_LABORATORIO_BANKACCOUNT_H
#define PROGETTO_LABORATORIO_BANKACCOUNT_H

class BankAccount {

public:
    BankAccount(const std::string &id, const std::string &iban, float balance,
                const std::vector<Transaction*> &transactions);

private:
    std::string id;
    std::string iban;
    float balance;
    std::vector<Transaction*> transactions;

};


#endif //PROGETTO_LABORATORIO_BANKACCOUNT_H
