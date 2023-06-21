// Agressive Cows

// solution video https://youtu.be/YTTdLgyqOLY?t=2626

#include <iostream>
using namespace std;

bool isPossible(int stalls[], int k, int mid)
{

    int cowCount = 1;

    int lastPos = stalls[0];

    for (int i = 0; i < sizeof(stalls); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int agressiveCows(int stalls[], int k)
{

    int s = 0;

    int maxi = -1;
    for (int i = 0; i < sizeof(stalls); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int e = maxi;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}