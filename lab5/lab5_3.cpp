#include <iostream>

int main() {
    double highest = 0, lowest = 0, arr[10];

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

    std::cout << "Your lowest value: " << lowest << std::endl;
    std::cout << "Your highest value: " << highest << std::endl;

    return 0;
}
