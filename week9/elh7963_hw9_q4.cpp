#include <iostream>
#include <string>

void oddsKeepEvensFlip(int arr[], int arrSize)
{

    int *odds = new int[arrSize];
    int *evens = new int[arrSize];

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 != 0)
        {

            odds[oddCount++] = arr[i];
        }
        else
        {

            evens[evenCount++] = arr[i];
        }
    }

    for (int i = 0; i < oddCount; i++)
    {
        arr[i] = odds[i];
    }

    for (int i = 0; i < evenCount; i++)
    {
        arr[oddCount + i] = evens[evenCount - 1 - i];
    }

    delete[] odds;
    delete[] evens;
}

int main()
{

    int arr[] = {5, 2, 11, 7, 6, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    oddsKeepEvensFlip(arr, arrSize);

    std::cout << "After flip: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
