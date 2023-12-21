#include <iostream>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;

    // Create an array on the heap
    int* arr = new int[size];

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Elements in the array are: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int newSize;
    std::cout << "Enter the new size of the array: ";
    std::cin >> newSize;

    // Create a new array with the new size
    int* newArr = new int[newSize];

    // Copy elements from the old array to the new array
    int copySize = (newSize < size) ? newSize : size;
    for (int i = 0; i < copySize; i++) {
        newArr[i] = arr[i];
    }

    // Delete the old array
    delete[] arr;

    // Update the pointer to point to the new array
    arr = newArr;

    std::cout << "Enter " << (newSize - copySize) << " more elements:\n";
    for (int i = copySize; i < newSize; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Elements in the modified array are: ";
    for (int i = 0; i < newSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Delete the modified array
    delete[] arr;

    return 0;
}


// In this program, the user is prompted to enter the initial size of the
//  array and the elements. Then, the user can enter a new size for the
//   array. The program dynamically allocates a new array with the new 
//   size and copies the elements from the old array to the new array. 
//   After that, the old array is deleted, and the pointer is updated 
//   to point to the new array. Finally, the user can enter additional
//    elements for the modified array, and the program displays the
//     elements in the modified array.