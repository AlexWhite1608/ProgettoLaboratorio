//
// Created by aless on 18/02/2021.
//

#include "../Headers/Accreditation.h"

Accreditation::Accreditation(const std::string &id, const std::string &description, const std::string &addresser,
                             const std::string &addressee, float amount) : Transaction(id, description, addresser,
                                                                                       addressee, amount) {}