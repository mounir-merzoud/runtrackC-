#include <iostream>

int main() {
    int a, x, y, i, n, p;
    bool b, c, d;

    a = x + 5;
    std::cout << "a = " << a << std::endl;

    a = (x = y) + 2;
    std::cout << "a = " << a << std::endl;

    a = x == y;
    std::cout << "a = " << a << std::endl;

    b = (a < b) && (c < d);
    std::cout << "b = " << b << std::endl;

    int result = (i++) * (n + p);
    std::cout << "result = " << result << std::endl;

    return 0;
}
