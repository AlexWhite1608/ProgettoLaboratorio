//
// Created by aless on 18/02/2021.
//

#include "Transaction.h"

#ifndef PROGETTO_LABORATORIO_PAYMENT_H
#define PROGETTO_LABORATORIO_PAYMENT_H

class Payment : public Transaction {
public:
    Payment(const std::string &id, const std::string &description, const std::string &addresser,
            const std::string &addressee, float amount);

private:
};

#endif //PROGETTO_LABORATORIO_PAYMENT_H
