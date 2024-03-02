#include <iostream>

int main() {
    std::cout << "Hello world";

    int file_size;
    file_size = 500;
    std::cout << file_size;

    // Exercise: Swap values of variables a and b
    int a = 1;
    int b = 2;

    int c;
    c = a;
    a = b;
    b = c;
    std::cout << a;
    std::cout << b;

    // Constants
    const double pi = 3.14;

    // Naming conventions
    int naming_convention; // Snake case
    int NamingConvention; // Pascal case
    int namingConvention; // Camel case

    // Mathematical Expressions
    int x = 10;
    int y = 3;
    int add = x + y;
    int subtract = x - y;
    int multiply = x * y;
    int divide = x / y; // Will be an integer! (3)
    int modulus = x % y; // Remainder of division (1)

    // To get a floating point number,
    double x2 = 10;
    int y2 = 3;
    double divide2 = x2 / y2;
    std::cout << divide2;

    // 0 tells OS program terminated correctly
    return 0;
}