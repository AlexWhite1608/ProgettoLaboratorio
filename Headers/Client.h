//
// Created by aless on 18/02/2021.
//

#include <string>
#include <vector>
#include "BankAccount.h"

#ifndef PROGETTO_LABORATORIO_CLIENT_H
#define PROGETTO_LABORATORIO_CLIENT_H

enum ClientType {Private, Company};

class Client {

public:
    Client(const std::string &name, ClientType clientType, const std::vector<BankAccount*> &bankAccounts);

private:
    std::string name;
    ClientType clientType;
    std::vector<BankAccount*> bankAccounts;

};


#endif //PROGETTO_LABORATORIO_CLIENT_H
