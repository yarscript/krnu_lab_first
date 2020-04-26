#include <iostream>

int main() {
    int i, j, n = 7, l = 0, r = 0;
    int a[7][7];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cout << "Enter " << i + 1 << " : " << n + 1 << "element" << std::endl;
            std::cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        l = l + a[i][i];
    }
    for (i = 0; i < n; i++) {
        r = r + a[i][n-i-1];
    }
    std::cout << "Left diagonal: " << l << std::endl;
    std::cout << "Right diagonal: " << r << std::endl;

    return 0;
}
