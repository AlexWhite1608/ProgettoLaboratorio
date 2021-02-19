//
// Created by aless on 18/02/2021.
//

#include "../Headers/Accreditation.h"
#include "../Headers/randomString.h"

Accreditation::Accreditation(const std::string &id, const std::string &description, const std::string &addresser,
                             const std::string &addressee, float amount) : Transaction(id, description, addresser,
                                                                                       addressee, amount) {

}

float Accreditation::execute(float sum, const std::string &description, const std::string &addresser,
                             const std::string &addressee) {
    id = randomString(ID_LENGTH);

    this->description = description;
    this->addresser = addresser;
    this->addressee = addressee;
    this->amount = sum - (sum * COMMISSION_FEE);

    this->printTransaction();

    return amount;
}
