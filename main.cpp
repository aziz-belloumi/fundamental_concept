#include <iostream>

// Method 1: Using Arithmetic Operations (Addition and Subtraction)
void swapUsingAddition(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Method 2: Using Arithmetic Operations (Multiplication and Division)
void swapUsingMultiplication(int& a, int& b) {
    a = a * b;
    b = a / b;
    a = a / b;
}

// Method 3: Using Bitwise XOR
void swapUsingXOR(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// Method 4: Using Bitwise OR and AND
void swapUsingORAndAND(int& a, int& b) {
    a = a | b;
    b = a & b;
    a = a ^ b;
}

int main() {
    int a = 10, b = 20;
    swapUsingAddition(a, b);
    std::cout << "After swapUsingAddition: a = " << a << ", b = " << b << std::endl;

    swapUsingMultiplication(a, b);
    std::cout << "After swapUsingMultiplication: a = " << a << ", b = " << b << std::endl;


    swapUsingXOR(a, b);
    std::cout << "After swapUsingXOR: a = " << a << ", b = " << b << std::endl;

    swapUsingORAndAND(a, b);
    std::cout << "After swapUsingORAndAND: a = " << a << ", b = " << b << std::endl;

    return 0;
}