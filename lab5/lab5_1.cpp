#include <iostream>

int main() {
    double arr[10];
    double sum = 0, averageValue;

    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter " << i + 1 << " num" << std::endl;
        std::cin >> arr[i];
        sum += arr[i];
    }

    averageValue = sum / 10;
    std::cout
            << "Sum of array: " << sum << std::endl
            << "Average value is " << averageValue << std::endl;

    return 0;
}
