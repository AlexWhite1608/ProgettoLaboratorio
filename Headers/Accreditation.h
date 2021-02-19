//
// Created by aless on 18/02/2021.
//

#include "Transaction.h"

#ifndef PROGETTO_LABORATORIO_ACCREDITATION_H
#define PROGETTO_LABORATORIO_ACCREDITATION_H

class Accreditation : public Transaction {
public:
    Accreditation(const std::string &id, const std::string &description, const std::string &addresser,
                  const std::string &addressee, float amount);

    float execute(float sum) override;

private:


};

#endif //PROGETTO_LABORATORIO_ACCREDITATION_H
