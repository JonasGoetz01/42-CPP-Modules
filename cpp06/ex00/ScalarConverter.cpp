#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { *this = other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isInt(const std::string& input) {
    char* endptr = NULL;
    long result = std::strtol(input.c_str(), &endptr, 10);
    if (*endptr != '\0' || errno == ERANGE || result > INT_MAX || result < INT_MIN) {
        return false;
    }
    return true;
}

bool ScalarConverter::isChar(const std::string& input) {
    return input.length() == 1 && std::isprint(input[0]);
}

bool ScalarConverter::isFloat(const std::string& input) {
    char* endptr = NULL;
    std::strtod(input.c_str(), &endptr);
    if (*endptr != 'f' || *(endptr + 1) != '\0') {
        return false;
    }
    return true;
}

bool ScalarConverter::isDouble(const std::string& input) {
    char* endptr = NULL;
    std::strtod(input.c_str(), &endptr);
    return *endptr == '\0';
}

void ScalarConverter::convertFromChar(const std::string& input) {
    char character = input[0];
    std::cout << "char: '" << character << "'\n"
              << "int: " << static_cast<int>(character) << '\n'
              << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(character) << 'f' << '\n'
              << "double: " << static_cast<double>(character) << std::endl;
}

void ScalarConverter::convertFromDouble(const std::string& input) {
    double dbl = std::strtod(input.c_str(), NULL);
    std::cout << "char: " << ((dbl >= 0 && dbl < 128 && std::isprint(static_cast<int>(dbl))) ? "'" + std::string(1, static_cast<char>(dbl)) + "'" : "impossible") << '\n'
              << "int: " << ((dbl > INT_MAX || dbl < INT_MIN) ? "impossible" : std::to_string(static_cast<int>(dbl))) << '\n'
              << std::fixed << std::setprecision(1)
              << "float: " << static_cast<float>(dbl) << 'f' << '\n'
              << "double: " << dbl << std::endl;
}

void ScalarConverter::convertFromInt(const std::string& input) {
    int dec = std::atoi(input.c_str());
    std::cout << "char: " << ((dec >= 0 && dec < 128 && std::isprint(dec)) ? "'" + std::string(1, static_cast<char>(dec)) + "'" : "impossible") << '\n'
              << "int: " << dec << '\n'
              << std::fixed << std::setprecision(1)
              << "float: " << static_cast<float>(dec) << 'f' << '\n'
              << "double: " << static_cast<double>(dec) << std::endl;
}

void ScalarConverter::convertFromFloat(const std::string& input) {
    float flt = static_cast<float>(std::strtod(input.c_str(), NULL));
    std::cout << "char: " << ((flt >= 0 && flt < 128 && std::isprint(static_cast<int>(flt))) ? "'" + std::string(1, static_cast<char>(flt)) + "'" : "impossible") << '\n'
              << "int: " << ((flt > INT_MAX || flt < INT_MIN) ? "impossible" : std::to_string(static_cast<int>(flt))) << '\n'
              << std::fixed << std::setprecision(1)
              << "float: " << flt << 'f' << '\n'
              << "double: " << static_cast<double>(flt) << std::endl;
}

void ScalarConverter::convert(const std::string& input) {
    if (input.empty()) {
        std::cout << "Error: input can't be empty" << std::endl;
        return;
    }
    if (isChar(input))
        convertFromChar(input);
    else if (isInt(input))
        convertFromInt(input);
    else if (isFloat(input) || input == "-inff" || input == "+inff" || input == "nanf")
        convertFromFloat(input);
    else if (isDouble(input) || input == "-inf" || input == "+inf" || input == "nan")
        convertFromDouble(input);
    else
        std::cout << "Error: Unsupported type. Please enter a valid type." << std::endl;
}