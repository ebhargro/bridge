#include <iostream>
#include <string>

int *getPosNums1(const int arr[], int arrSize, int &outPosArrSize)
{

    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArrSize++;
        }
    }

    int *posArr = new int[outPosArrSize];

    int index = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            posArr[index++] = arr[i];
        }
    }

    return posArr;
}

void getPosNums2(const int arr[], int arrSize, int *&outPosArr, int &outPosArrSize)
{

    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArrSize++;
        }
    }

    outPosArr = new int[outPosArrSize];

    int index = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArr[index++] = arr[i];
        }
    }
}

void getPosNums3(const int arr[], int arrSize, int outPosArr[], int &outPosArrSize)
{
    outPosArrSize = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArr[outPosArrSize++] = arr[i];
        }
    }
}

void getPosNums4(const int *arr, int arrSize, int **outPosArrPtr, int *outPosArrSizePtr)
{
    *outPosArrSizePtr = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            (*outPosArrSizePtr)++;
        }
    }

    *outPosArrPtr = new int[*outPosArrSizePtr];

    int index = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            (*outPosArrPtr)[index++] = arr[i];
        }
    }
}

int main()
{
    const int arrSize = 6;
    int arr[arrSize] = {3, -1, 3, 0, 6, 4};

    int outSize1;
    int *posArr1 = getPosNums1(arr, arrSize, outSize1);
    std::cout << "getPosNums1 results: ";
    for (int i = 0; i < outSize1; i++)
    {
        std::cout << posArr1[i] << " ";
    }
    std::cout << "\n";
    delete[] posArr1;

    int outSize2;
    int *posArr2 = nullptr;
    getPosNums2(arr, arrSize, posArr2, outSize2);
    std::cout << "getPosNums2 results: ";
    for (int i = 0; i < outSize2; i++)
    {
        std::cout << posArr2[i] << " ";
    }
    std::cout << "\n";
    delete[] posArr2;

    int posArr3[6];
    int outSize3;
    getPosNums3(arr, arrSize, posArr3, outSize3);
    std::cout << "getPosNums3 results: ";
    for (int i = 0; i < outSize3; i++)
    {
        std::cout << posArr3[i] << " ";
    }
    std::cout << "\n";

    int outSize4;
    int *posArr4 = nullptr;
    getPosNums4(arr, arrSize, &posArr4, &outSize4);
    std::cout << "getPosNums4 results: ";
    for (int i = 0; i < outSize4; i++)
    {
        std::cout << posArr4[i] << " ";
    }
    std::cout << "\n";
    delete[] posArr4;

    return 0;
}
