#include <iostream>
using namespace std;

int power(int n, int m)
{

    if (m == 0)
    {
        return 1;
    }

    int ans = n * power(n, m - 1);
    return ans;
}

int main()
{

    int num = 5;
    int exp = 4;

    int ans = power(num,exp);

    cout << ans;

    return 0;
}