#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    int levelValue = -1;

    // Convert the log level string to an integer value for comparison
    if (level == "DEBUG") {
        levelValue = 0;
    } else if (level == "INFO") {
        levelValue = 1;
    } else if (level == "WARNING") {
        levelValue = 2;
    } else if (level == "ERROR") {
        levelValue = 3;
    }

    // Print messages based on the provided log level
    switch (levelValue) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
            std::cout << std::endl;
            std::cout << "[ INFO ]" << std::endl;
            this->info();
            std::cout << std::endl;
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            std::cout << std::endl;
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            std::cout << std::endl;
            break;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            this->info();
            std::cout << std::endl;
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            std::cout << std::endl;
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            std::cout << std::endl;
            break; // Added break statement
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            std::cout << std::endl;
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            std::cout << std::endl;
            break; // Added break statement
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}



Harl::Harl() {
    levels["DEBUG"] = &Harl::debug;
    levels["INFO"] = &Harl::info;
    levels["WARNING"] = &Harl::warning;
    levels["ERROR"] = &Harl::error;
}
