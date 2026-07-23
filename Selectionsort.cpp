#include <iostream>
#include <utility> 
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index of the minimum element
            }
        }
        
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

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
