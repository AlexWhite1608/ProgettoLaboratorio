//
// Created by aless on 18/02/2021.
//

#include "../Headers/Client.h"

Client::Client(const std::string &name, ClientType clientType, const std::vector<BankAccount*> &bankAccounts) : name(
        name), clientType(clientType), bankAccounts(bankAccounts) {}
