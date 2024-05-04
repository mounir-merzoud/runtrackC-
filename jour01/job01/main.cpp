#include <iostream>

int main() {
    char c = '\x01';
    short int p = 10;
    int x, y, z, w;

    x = p + 3;
    std::cout << "x = " << x << std::endl;

    y = c + 1;
    std::cout << "y = " << static_cast<int>(y) << std::endl;

    z = p + c;
    std::cout << "z = " << z << std::endl;

    w = 3 * p + 5 * c;
    std::cout << "w = " << w << std::endl;

    return 0;
}
