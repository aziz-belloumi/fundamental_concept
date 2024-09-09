#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found\n";
    }

    return 0;
}