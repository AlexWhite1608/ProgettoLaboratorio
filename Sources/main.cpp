#include <iostream>
#include "../Headers/getDate.h"
#include "../Headers/randomString.h"

int main() {
    std::cout << "Inizializzazione del progetto!" << std::endl;

    std::cout << "Data odierna: " << getDate() << std::endl;

    std::cout << "Random string generated: " << randomString(27) << std::endl;

    return 0;
}