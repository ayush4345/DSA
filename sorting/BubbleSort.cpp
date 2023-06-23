// space complexity O(1)
// time complexity O(n^2)

#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    return arr[4];
}

int main()
{
    int arr[] = {3, 5, 1, 7, 89, 19};

    int result = bubbleSort(arr, 5);

    printf("%d", result);
}