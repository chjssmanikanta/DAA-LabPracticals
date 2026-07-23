#include <iostream>
#include <utility> // Required for std::swap

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    // Outer loop moves the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        // Assume the first unsorted element is the minimum
        int min_idx = i;
        
        // Inner loop finds the actual minimum element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index of the minimum element
            }
        }
        
        // Swap the found minimum element with the first unsorted element
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// Helper function to print the array
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int size = sizeof(data) / sizeof(data[0]);
    
    std::cout << "Original array: ";
    printArray(data, size);
    
    selectionSort(data, size);
    
    std::cout << "Sorted array:   ";
    printArray(data, size);
    
    return 0;
}
