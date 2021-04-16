#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int x = 1;
    int array[10][10];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == 0) {
                array[i][j] = pow(x, j);
            } else if (j == 0) {
                array[i][j] = pow(x, i);
            } else if (i == 9) {
                array[i][j] = pow(x, 9 - j);
            } else if (j == 9) {
                array[i][j] = pow(x, 9 - i);
            } else {
                array[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << std::setw(5) << array[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
