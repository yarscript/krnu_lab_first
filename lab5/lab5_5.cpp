#include <iostream>

int main() {
    int i, j, arrSize = 7, l = 0, r = 0;
    int a[arrSize][arrSize];

    for (i = 0; i < arrSize; i++) {
        for (j = 0; j < n; j++) {
            std::cout << "Enter " << i + 1 << " : " << j + 1 << "element" << std::endl;
            std::cin >> a[i][j];
        }
    }

    for (i = 0; i < arrSize; i++) {
        l = l + a[i][i];
    }
    for (i = 0; i < arrSize; i++) {
        r = r + a[i][arrSize - i - 1];
    }

    std::cout
            << "Left diagonal: " << l << std::endl
            << "Right diagonal: " << r << std::endl;

    return 0;
}
