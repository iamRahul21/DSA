#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to find the pivot position
int partition(vector<int>& array, int low, int high) {
    int pivot = array[high]; // Choose the last element as the pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (array[j] <= pivot) {
            i++; // Increment the index of the smaller element
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(vector<int>& array, int low, int high) {
    if (low < high) {
        // partitionIndex is the index where the pivot is placed
        int partitionIndex = partition(array, low, high);

        // Recursively sort the elements before and after partition
        quickSort(array, low, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, high);
    }
}

int main() {
    vector<int> array = {10, 7, 8, 9, 1, 5};
    int n = array.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << std::endl;

    quickSort(array, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << std::endl;

    return 0;
}