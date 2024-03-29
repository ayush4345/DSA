#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;
    int mid = s + (e - s) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 6, 7, 8, 99, 100};
    int key = 99;
    int s = 0;
    int e = 8;

    int result = binarySearch(arr, s, e, key);

    printf("%d", result);
}