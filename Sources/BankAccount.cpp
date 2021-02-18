//
// Created by aless on 18/02/2021.
//

#include "../Headers/BankAccount.h"

BankAccount::BankAccount(const std::string &id, const std::string &iban, float balance,
                         const std::vector<Transaction*> &transactions) : id(id), iban(iban), balance(balance),
                                                                          transactions(transactions) {}

