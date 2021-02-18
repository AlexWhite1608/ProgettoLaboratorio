//
// Created by aless on 18/02/2021.
//

#include "../Headers/getDate.h"
#include <ctime>

std::string getDate(){
    //gets the current time
    time_t currentTime = time(0);

    //converts currentTime in a string
    std::string date = ctime(&currentTime);

    return date;
}