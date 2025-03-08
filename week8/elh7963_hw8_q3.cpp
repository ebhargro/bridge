#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize)
{
    int left = 0;
    int right = arrSize - 1;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

void removeOdd(int arr[], int &arrSize)
{
    int writeIndex = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }
    arrSize = writeIndex;
}

void splitParity(int arr[], int arrSize)
{
    int left = 0;
    int right = arrSize - 1;
    while (left < right)
    {

        while (left < right && (arr[left] % 2 != 0))
        {
            left++;
        }

        while (left < right && (arr[right] % 2 == 0))
        {
            right--;
        }

        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];
        if (i < arrSize - 1)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}
