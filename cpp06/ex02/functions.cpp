#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream> // Ensure iostream is included for std::cout
#include <typeinfo> // For std::bad_cast

using std::cout;
using std::endl;

Base* generate(void) {
    switch (std::rand() % 3) {
        case 0: return new A;
        case 1: return new B;
        case 2: return new C;
    }
    return 0;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != 0)
        cout << GREEN << "The base pointer is of type A" << RESET << endl;
    else if (dynamic_cast<B*>(p) != 0)
        cout << GREEN << "The base pointer is of type B" << RESET << endl;
    else if (dynamic_cast<C*>(p) != 0)
        cout << GREEN << "The base pointer is of type C" << RESET << endl;
    else
        cout << GREEN << "The base pointer is of unknown type" << RESET << endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p); // Cast and use the result to avoid warnings
        cout << GREEN << "The base reference is of type A" << RESET << endl;
    } catch (const std::bad_cast&) {
        try {
            (void)dynamic_cast<B&>(p); // Repeat the process for B
            cout << GREEN << "The base reference is of type B" << RESET << endl;
        } catch (const std::bad_cast&) {
            try {
                (void)dynamic_cast<C&>(p); // And for C
                cout << GREEN << "The base reference is of type C" << RESET << endl;
            } catch (const std::bad_cast&) {
                cout << GREEN << "The base reference is of unknown type" << RESET << endl;
            }
        }
    }
}