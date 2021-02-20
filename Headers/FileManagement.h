//
// Created by aless on 18/02/2021.
//

#include <string>
#include "Transaction.h"

#ifndef PROGETTO_LABORATORIO_FILEMANAGEMENT_H
#define PROGETTO_LABORATORIO_FILEMANAGEMENT_H

class FileManagement{
public:
    FileManagement(const std::string &filePath);

    FileManagement(){};

    //bool createFile();

    //bool deleteFile();

    //bool readTransaction(std::string id);

    bool writeTransaction(Transaction* transaction);

    bool deleteTransaction(std::string id);

    bool readAll();

private:
    std::string filePath;
};

#endif //PROGETTO_LABORATORIO_FILEMANAGEMENT_H
