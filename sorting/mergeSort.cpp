#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays
void merge(vector<int>& array, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = array[mid + 1 + j];

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArray, if any
    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArray, if any
    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(vector<int>& array, int left, int right) {
    if (left >= right) {
        return; // Base case: If the array has one or zero elements, it is already sorted
    }
    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);        // Sort the first half
    mergeSort(array, mid + 1, right);   // Sort the second half
    merge(array, left, mid, right);     // Merge the sorted halves
}

int main() {
    vector<int> array = {38, 27, 43, 3, 9, 82, 10};
    int array_size = array.size();

    cout << "Original array: ";
    for (int i = 0; i < array_size; i++)
        cout << array[i] << " ";
    cout << endl;

    mergeSort(array, 0, array_size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < array_size; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}