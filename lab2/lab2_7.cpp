#include <iostream>
#include <cstdlib>

int main() {
    std::string inputValue;
    int numsCount = 0;

    std::cout << "Enter any count of numbers. Enter \"end\" to finish" << std::endl;

    while (inputValue != "end") {
        std::cin >> inputValue;
        if (atoi(inputValue.c_str()) > 0) {
            ++numsCount;
        }
    }

    std::cout << "Cunt of positive nums: " << numsCount;

    return 0;
}
