#include <iostream>

int main() {
    double arr[10];

    for (int i = 9; i >= 0; --i) {
        std::cout << "Enter " << 10 - i << " array num" << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "Your element in Desc: " << std::endl;
    for (double elem : arr) {
        std::cout << elem << std::endl;
    }

    return 0;
}
