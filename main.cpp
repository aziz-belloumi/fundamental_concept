#include <iostream>
int countOrdinaryNumbers(int n) {
    int count = 0;
    for (int digit = 1; digit <= 9; ++digit) {
        int ordinaryNumber = digit;
        while (ordinaryNumber <= n) {
            count++;
            ordinaryNumber = ordinaryNumber * 10 + digit;
        }
    }
    return count;
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << countOrdinaryNumbers(n) << std::endl;
    }
    return 0;
}