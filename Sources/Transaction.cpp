//
// Created by aless on 18/02/2021.
//

#include "../Headers/Transaction.h"
#include <iostream>

Transaction::Transaction(const std::string &id, const std::string &description, const std::string &addresser,
                         const std::string &addressee, float amount) {}

void Transaction::printTransaction() {
    std::cout << "Transazione eseguita!" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Descrizione: " << description << std::endl;
    std::cout << "Mittente: " << addresser << std::endl;
    std::cout << "Destinatario: " << addressee << std::endl;
    std::cout << "Somma: " << amount << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
}
