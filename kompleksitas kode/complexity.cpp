#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

// Linear Search
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Quicksort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

// fungsi hitung waktu eksekusi
template<typename Func>
double measureExecutionTime(Func&& func) {
    auto start = chrono::high_resolution_clock::now();
    func();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    return duration.count();
}

int main() {
    vector<int> arr = {5, 2, 8, 10, 1, 3, 6, 9, 4, 7};
    int target = 6;

    // Linear Search
    double linearSearchTime = measureExecutionTime([&]() {
        linearSearch(arr, target);
    });
    cout << "Linear Search Time: " << linearSearchTime << " seconds" << endl;

    // Binary Search
    sort(arr.begin(), arr.end());
    double binarySearchTime = measureExecutionTime([&]() {
        binarySearch(arr, target);
    });
    cout << "Binary Search Time: " << binarySearchTime << " seconds" << endl;

    // Bubble Sort
    vector<int> bubbleSortArr = arr;
    double bubbleSortTime = measureExecutionTime([&]() {
        bubbleSort(bubbleSortArr);
    });
    cout << "Bubble Sort Time: " << bubbleSortTime << " seconds" << endl;

    // Selection Sort
    vector<int> selectionSortArr = arr;
    double selectionSortTime = measureExecutionTime([&]() {
        selectionSort(selectionSortArr);
    });
    cout << "Selection Sort Time: " << selectionSortTime << " seconds" << endl;

    // Quicksort
    vector<int> quickSortArr = arr;
    double quickSortTime = measureExecutionTime([&]() {
        quickSort(quickSortArr, 0, quickSortArr.size() - 1);
    });
    cout << "Quicksort Time: " << quickSortTime << " seconds" << endl;

    return 0;
}
