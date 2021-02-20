//
// Created by aless on 18/02/2021.
//

#include "Transaction.h"
#include "clientType.h"

#ifndef PROGETTO_LABORATORIO_ACCREDITATION_H
#define PROGETTO_LABORATORIO_ACCREDITATION_H



class Accreditation : public Transaction {
public:
    Accreditation(const std::string &id, const std::string &description, const std::string &addresser,
                  const std::string &addressee, float amount, const std::string &date);

    float execute(float sum, const std::string &description, const std::string &addresser,
                  const std::string &addressee) override;

    float execute(const std::string &description, const std::string &addresser,
                          const std::string &addressee, ClientType clientType) override;

private:


};

#endif //PROGETTO_LABORATORIO_ACCREDITATION_H
