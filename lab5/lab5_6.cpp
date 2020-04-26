#include <iostream>

int main() {
    int i, j, m = 5, n = 6;
    int a[m][n], b[m][n], c[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            std::cout << "Enter " << i << " : " << j << "element";
            std::cin >> a[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            std::cout << "Enter " << i << " : " << j << "element";
            std::cin >> b[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        std::cout << std::endl;
        for (j = 0; j < n; j++) {
            std::cout << c[i][j] << " ";
        }
    }

    return 0;
}
