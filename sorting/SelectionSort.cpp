// space complexity O(1)
// time complexity O(n^2)

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 5, 99, 1, 2};
    int n = 5;

    for (int i = 0; i < 4; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    printf("%d",arr[0]);
}
