#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome.\n";
    } else {
        std::cout << str << " is not a palindrome.\n";
    }
    return 0;
}