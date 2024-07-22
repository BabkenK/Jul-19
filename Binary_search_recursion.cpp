#include <iostream>
#include <vector>

int binarySearchRec(std::vector<int>& arr, int left, int right, int target);

int binarySearchRec(std::vector<int>& arr, int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearchRec(arr, left, mid - 1, target);

        return binarySearchRec(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int size = 0;
    int target = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "Please enter integers for the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the element to search: ";
    std::cin >> target;

    int result = binarySearchRec(arr, 0, size - 1, target);

    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found in the array" << std::endl;

    return 0;
}
