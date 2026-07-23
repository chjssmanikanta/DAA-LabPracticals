#include <iostream>
#include <vector>
#include <utility> // For std::swap

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++; 
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    
    return i + 1; 
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {10, 7, 8, 9, 1, 5};
    int n = data.size();

    std::cout << "Unsorted array: ";
    printVector(data);

    quickSort(data, 0, n - 1);

    std::cout << "Sorted array: ";
    printVector(data);
    
    return 0;
}
