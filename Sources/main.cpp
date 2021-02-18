#include <iostream>
#include "../Headers/getDate.h"

int main() {
    std::cout << "Inizializzazione del progetto!" << std::endl;

    std::cout << "Data odierna: " << getDate() << std::endl;

    return 0;
}