//
// Created by aless on 23/02/2021.
//

#include <fstream>
#include <iostream>
#include "../Headers/readAll.h"

bool readAll(){

    std::fstream file;
    file.open(FILE_PATH);
    std::string line;

    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            std::cout << line << '\n';
        }
        file.close();
    } else
        std::cout << "Impossibile scrivere la transazione, errore apertura file!" << std::endl;

    return false;
}
