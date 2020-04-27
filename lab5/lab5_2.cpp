#include <iostream>

int main() {
    const int arrSize = 10;
    double arr[arrSize];

    for (int i = arrSize - 1; i >= 0; --i) {
        std::cout << "Enter " << arrSize - i << " array num" << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "Your element in Desc: " << std::endl;
    for (double elem : arr) {
        std::cout << elem << std::endl;
    }

    return 0;
}
