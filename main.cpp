#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int sum = 0, temp = num;
    int n = std::to_string(num).length();
    while (temp != 0) {
        int digit = temp % 10;
        sum += std::pow(digit, n);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number.\n";
    } else {
        std::cout << num << " is not an Armstrong number.\n";
    }
    return 0;
}
