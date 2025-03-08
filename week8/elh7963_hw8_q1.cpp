#include <iostream>

using namespace std;

int minInArray(int arr[], int arrSize)
{
    int minValue = arr[0];
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int main()
{
    int arr[20];
    int indices[20];
    int count = 0;

    cout << "Please enter 20 integers separated by a space:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    int minValue = minInArray(arr, 20);

    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == minValue)
        {
            indices[count] = i;
            count++;
        }
    }

    cout << "The minimum value is " << minValue << ", and it is located in the following indices: ";
    for (int i = 0; i < count; i++)
    {
        cout << indices[i];
        if (i < count - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}