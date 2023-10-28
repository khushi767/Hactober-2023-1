#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> unsortedArray = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(unsortedArray);

    std::cout << "Sorted array: ";
    for (int num : unsortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
