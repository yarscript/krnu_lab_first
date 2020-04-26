#include <iostream>

int main() {
    char inputSym;

    std::cout << "Enter any symbol" << std::endl;
    std::cin >> inputSym;

    int inputSymCode = (int)inputSym;

    if (inputSymCode >= 65 && inputSymCode <= 90) {
        std::cout << "Your entered sym in upper case";
    } else if (inputSymCode >= 97 && inputSymCode <= 122) {
        std::cout << "Your entered sym in lower case";
    } else if (inputSymCode >= 48 && inputSymCode <= 57) {
        std::cout << "Your entered sym is number";
    } else {
        std::cout << "Your entered sym is special";
    }

    return 0;
}
