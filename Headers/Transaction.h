//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "constantValues.h"
#include "clientType.h"

#ifndef PROGETTO_LABORATORIO_TRANSACTION_H
#define PROGETTO_LABORATORIO_TRANSACTION_H

class Transaction {

public:
    Transaction(const std::string &id, const std::string &description, const std::string &addresser,
                const std::string &addressee, float amount);

    Transaction(){};

    //it prints the latest transaction
    void printTransaction();

    virtual float execute(float sum, const std::string &description, const std::string &addresser,
                          const std::string &addressee) = 0;

    //used for the initial transaction. Different minium fee depends on the type of client
    virtual float execute(const std::string &description, const std::string &addresser,
                          const std::string &addressee, ClientType clientType) = 0;

    const std::string &getId() const;

    const std::string &getDescription() const;

    const std::string &getAddresser() const;

    const std::string &getAddressee() const;

    float getAmount() const;

    const std::string &getDate() const;

protected:
    std::string id;
    std::string description;
    std::string addresser; //mittente
    std::string addressee; //destinatario
    std::string date;
    float amount;

};

#endif //PROGETTO_LABORATORIO_TRANSACTION_H
