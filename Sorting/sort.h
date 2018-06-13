#include <iostream>

template <typename T>
void bubbleSort(T arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

template <typename T>
int minPosition(T arr[], int s, int n)
{
    int minPos = s;
    int minElem = arr[s];
    for(int i = s; i < n; i++)
    {
        if(arr[i] < minElem)
        {
            minElem = arr[i];
            minPos = i;
        }
    }
    return minPos;
}

template <typename T>
void selectionSort(T arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int minPos = minPosition(arr, i, n);
        {
            T aux = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = aux;
        }
    }
}

template <typename T>
void insersionSort(T arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                T aux = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

template <typename T>
int partiton(T arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j < r; j++)
    {
        if(arr[j] < pivot)
        {
            i = i+1;
            int aux = arr[j];
            arr[j] = arr[i];
            arr[i] = aux;
        }
    }
    int aux = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = aux;
    return i+1;
}

template<typename T>
void qs(T arr[], int l, int r)
{
    if(l < r)
    {
        int p = partiton(arr, l, r);
        qs(arr, l, p-1);
        qs(arr, p+1, r);
    }
}

template <typename T>
void quickSort(T arr[], int n)
{
    qs(arr, 0, n-1);
}

template <typename T>
void print(T arr[], int n)
{
    std::cout << "<";
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << ">";
}