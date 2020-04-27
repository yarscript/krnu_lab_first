#include <iostream>

int main() {
    const int arrSize = 10;
    double highest = 0, lowest = 0, arr[arrSize];

    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter " << i + 1 << " num of arr" << std::endl;
        std::cin >> arr[i];

        if (i == 0) {
            highest = arr[i];
            lowest = arr[i];
        } else {
            if (arr[i] > highest) {
                highest = arr[i];
            }

            if (arr[i] < lowest) {
                lowest = arr[i];
            }
        }
    }

    std::cout
            << "Your lowest value: " << lowest << std::endl
            << "Your highest value: " << highest << std::endl;

    return 0;
}
