#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int b = -1;
    srand(time(nullptr));
    int a = rand() % 100;
    std::cout << "Guess the number" << std::endl;

    while(b != a)
    {
        std::cin >> b;
        if(b > a)
            std::cout << "More" << std::endl;
        else if(b < a)
            std::cout << "Less" << std::endl;
        else if(b == a)
            std::cout << "Your right!" << std::endl;
    }

    return 0;
}
