#include <iostream>

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else
            return true;
    } else
        return false;
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (isLeapYear(year)) {
        std::cout << year << " is a leap year.\n";
    } else {
        std::cout << year << " is not a leap year.\n";
    }
    return 0;
}
