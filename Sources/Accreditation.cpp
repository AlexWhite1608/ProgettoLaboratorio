//
// Created by aless on 18/02/2021.
//

#include "../Headers/Accreditation.h"
#include "../Headers/randomString.h"
#include "../Headers/constantValues.h"
#include "../Headers/getDate.h"

Accreditation::Accreditation(const std::string &id, const std::string &description, const std::string &addresser,
                             const std::string &addressee, float amount, const std::string &date) : Transaction(id, description, addresser,
                                                                                       addressee, amount, date) {

}

float Accreditation::execute(float sum, const std::string &description, const std::string &addresser,
                             const std::string &addressee) {
    id = randomString(ID_LENGTH);

    this->description = description;
    this->addresser = addresser;
    this->addressee = addressee;
    this->amount = sum - (sum * COMMISSION_FEE);
    this->date = getDate();

    this->printTransaction();

    return amount;
}

//used for the first transaction when the account is created
float Accreditation::execute(const std::string &description, const std::string &addresser, const std::string &addressee,
                             ClientType clientType) {
    id = randomString(ID_LENGTH);

    this->description = description;
    this->addresser = addresser;
    this->addressee = addressee;

    if(clientType == ClientType::Private)
        this->amount = INITIAL_TRANSACTION_SUM_PRIVATE - (INITIAL_TRANSACTION_SUM_PRIVATE * COMMISSION_FEE);
    else if(clientType == ClientType::Company)
        this->amount = INITIAL_TRANSACTION_SUM_COMPANY - (INITIAL_TRANSACTION_SUM_COMPANY * COMMISSION_FEE);

    this->printTransaction();

    return amount;
}
