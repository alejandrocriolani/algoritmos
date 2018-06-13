#include <iostream>
#include "sort.h"

int main()
{
    int arr1[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr2[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr3[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr4[10] = {0,2,1,4,5,9,7,8,6,3};
    
    print(arr1, 10);
    std::cout << "\n";

    bubbleSort(arr1, 10);
    std::cout << "Bubble sort\n";
    print(arr1, 10);
    std::cout << "\n";

    selectionSort(arr2, 10);
    std::cout << "Selection sort\n";
    print(arr2, 10);
    std::cout << "\n";

    std::cout << "Insertion sort\n";
    insersionSort(arr3, 10);
    print(arr3, 10);
    std::cout << "\n";

    std::cout << "Quick sort\n";
    quickSort(arr4, 10);
    print(arr4, 10);
    std::cout << "\n";

    return 0;
}