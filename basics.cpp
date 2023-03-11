#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello World" << std::endl;

    // for (int i = 0; i < 9; i++)
    // {
    //     std::cout << i << std::endl;
    // }

    int num = 7;

    switch (num)
    {
    case 1:
        cout << "num is 1" << endl;
        break;

    case 2:
        cout << "num is 2" << endl;
        break;

    default:
        cout << "num is not 1" << endl;
        break;
    }

    int ans = sum(2,4);
    cout << ans << endl;
}