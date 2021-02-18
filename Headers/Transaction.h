//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>

#ifndef PROGETTO_LABORATORIO_TRANSACTION_H
#define PROGETTO_LABORATORIO_TRANSACTION_H

class Transaction {

public:
    Transaction(const std::string &id, const std::string &description, const std::string &addresser,
                const std::string &addressee, float amount);

private:
    std::string id;
    std::string description;
    std::string addresser; //mittente
    std::string addressee; //destinatario
    float amount;

};

#endif //PROGETTO_LABORATORIO_TRANSACTION_H
