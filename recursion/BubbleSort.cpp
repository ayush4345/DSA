#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{

    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, n - 1);
}

int main()
{
    int arr[] = {1, 4, 23, 99, 10, 3};

    sortArray(arr, 6);

    cout << arr[1] << endl;
    return 0;
}