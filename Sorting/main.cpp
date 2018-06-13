#include <iostream>
#include "sort.h"

int main()
{
    int arr1[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr2[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr3[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr4[10] = {0,2,1,4,5,9,7,8,6,3};
    int arr5[10] = {0,2,1,4,5,9,7,8,6,3};

    char cArr1[10] = "Alejandro";
    char cArr2[11] = "Algoritmos";
    char cArr3[10] = "dakvhulcb";
    char cArr4[13] = "Saul Goodman";
    
    print(arr1, 10);
    std::cout << "\n";

    bubbleSort(arr1, 10);
    std::cout << "Bubble sort\n";
    print(arr1, 10);
    std::cout << "\n";
    print(cArr1, 9);
    std::cout << "\n";
    bubbleSort(cArr1, 9);
    print(cArr1, 9);
    std::cout << "\n";

    selectionSort(arr2, 10);
    std::cout << "Selection sort\n";
    print(arr2, 10);
    std::cout << "\n";
    print(cArr2, 10);
    std::cout << "\n";
    selectionSort(cArr2, 10);
    print(cArr2, 10);
    std::cout << "\n";

    std::cout << "Insertion sort\n";
    insersionSort(arr3, 10);
    print(arr3, 10);
    std::cout << "\n";
    print(cArr3, 9);
    std::cout << "\n";
    insersionSort(cArr3, 9);
    print(cArr3, 9);
    std::cout << "\n";

    std::cout << "Quick sort\n";
    quickSort(arr4, 10);
    print(arr4, 10);
    std::cout << "\n";

    std::cout << "Merge sort\n";
    int *r1 = mergeSort(arr5, 10);
    print(r1, 10);
    std::cout << "\n";
    print(cArr4, 12);
    std::cout << "\n";
    char *r2 = mergeSort(cArr4, 12);
    print(r2, 12);
    std::cout << "\n";

    delete [] r1;
    delete [] r2;

    return 0;
}