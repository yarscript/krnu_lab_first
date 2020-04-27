#include <iostream>

int main() {
    const int columnLength = 5, rowLength = 6;
    int i, j;
    int a[columnLength][rowLength], b[columnLength][rowLength], c[columnLength][rowLength];

    for (i = 0; i < columnLength; i++) {
        for (j = 0; j < rowLength; j++) {
            std::cout << "Enter " << i << " : " << j << "element";
            std::cin >> a[i][j];
        }
    }
    for (i = 0; i < columnLength; i++) {
        for (j = 0; j < rowLength; j++) {
            std::cout << "Enter " << i << " : " << j << "element";
            std::cin >> b[i][j];
        }
    }

    for (i = 0; i < columnLength; i++) {
        for (j = 0; j < rowLength; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < columnLength; i++) {
        std::cout << std::endl;
        for (j = 0; j < rowLength; j++) {
            std::cout << c[i][j] << " ";
        }
    }

    return 0;
}
