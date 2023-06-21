// find sqrt of the number using binary search

// also ex:- we have sqrt(30) then itt will come 5.something in this case we will take the integer

#include <iostream>
using namespace std;

int sqrt(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{

    int number = 30;

    int result = sqrt(number);

    printf("%d", result);
}