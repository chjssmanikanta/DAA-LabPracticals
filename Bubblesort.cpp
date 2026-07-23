#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// Function to perform Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        
        // Inner loop for adjacent comparisons
        // Elements after (n - i - 1) are already sorted
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }
        
        // Optimization: If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Helper function to print the vector
void printVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Original array: ";
    printVector(data);
    
    bubbleSort(data);
    
    std::cout << "Sorted array:   ";
    printVector(data);
    
    return 0;
}
