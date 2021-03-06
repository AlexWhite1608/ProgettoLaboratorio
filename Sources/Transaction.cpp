//
// Created by aless on 18/02/2021.
//

#include "../Headers/Transaction.h"
#include "../Headers/BankAccount.h"
#include <iostream>

Transaction::Transaction(const std::string &id, const std::string &description, const std::string &addresser,
                         const std::string &addressee, float amount, const std::string &date) : id(id), description(description),
                                                                       addresser(addresser), addressee(addressee),
                                                                       amount(amount), date(date) {}

void Transaction::printTransaction() {
    std::cout << "Transazione eseguita!" << std::endl;
    std::cout << "Data e ora: " << date << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Descrizione: " << description << std::endl;
    std::cout << "Mittente: " << addresser << std::endl;
    std::cout << "Destinatario: " << addressee << std::endl;
    std::cout << "Somma: " << amount << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
}

const std::string &Transaction::getId() const {
    return id;
}

const std::string &Transaction::getDescription() const {
    return description;
}

const std::string &Transaction::getAddresser() const {
    return addresser;
}

const std::string &Transaction::getAddressee() const {
    return addressee;
}

float Transaction::getAmount() const {
    return amount;
}

const std::string &Transaction::getDate() const {
    return date;
}
