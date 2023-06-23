#include <iostream>

namespace BubbleSort {

    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}


namespace InsertionSort {

    void insertionSort(int arr[], int size) {
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
}

int main() {
    int arr[] = { 5, 2, 8, 1, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort::bubbleSort(arr, size);

    std::cout << "Sorted array using Bubble Sort: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    InsertionSort::insertionSort(arr, size);

    std::cout << "Sorted array using Insertion Sort: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}