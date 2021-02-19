//
// Created by aless on 18/02/2021.
//

#include "../Headers/BankAccount.h"
#include "../Headers/randomString.h"
#include <algorithm>

BankAccount::BankAccount(const std::string &id, const std::string &iban, float balance,
                         const std::vector<Transaction*> &transactions) : id(id), iban(iban), balance(balance),
                                                                          transactions(transactions) {}

void BankAccount::BankAccount::createAccount(const std::string name, ClientType clientType, Transaction *initialTransaction) {

    //generation of the new id and iban code
    id = randomString(ID_LENGTH);
    iban = randomString(IBAN_LENGTH);
    balance = 0;

    //the initial transaction requires a minimal sum to initialize the balance
    //refresh the balance
    balance = initialTransaction->execute(INITIAL_TRANSACTION_SUM);
    transactions.push_back(initialTransaction);
}



