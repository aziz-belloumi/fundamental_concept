#include <iostream>
#include <string>

int countVowels(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
            }
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Number of vowels in \"" << str << "\" is " << countVowels(str) << ".\n";
    return 0;
}
