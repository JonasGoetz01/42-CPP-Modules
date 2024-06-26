#pragma once

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        virtual ~Brain();
        Brain& operator=(const Brain& other);
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};