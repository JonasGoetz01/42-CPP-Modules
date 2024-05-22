#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <map>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();

    std::map<std::string, void (Harl::*)()> levels;

public:
    Harl();
    void complain(std::string level);
};

#endif
