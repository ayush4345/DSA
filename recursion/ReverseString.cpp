#include <iostream>
using namespace std;

int reverse(string& s, int i, int j){

    if(i>j){
        return 0;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    reverse (s, i, j);

    return 0;
}

int main(){

    string name="Ayush";

    reverse(name,0, name.length() -1);

    cout << name;
 return 0;
}