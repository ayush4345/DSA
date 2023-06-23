// video related https://www.youtube.com/watch?v=MMO2c57XHzM

#include <iostream>
using namespace std;

int update(int &n)
{
    return n++;
}

int main()
{
    // refrence variable
    int i = 5;
    int &j = i;

    j++;

    update(i);

    cout << i << endl;
    cout << j << endl;

    return 0;

    // dynamic memory allocation in the heap

    char *ch = new char; // 'new char' give address of memory allocated in the heap

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // maually release memory
    delete[] arr;
}
