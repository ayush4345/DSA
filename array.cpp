#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

typedef long long ll;

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> hashmap;

        hashmap['('] = 0;
        hashmap[']'] = 0;
        hashmap['['] = 0;
        hashmap[')'] = 0;
        hashmap['{'] = 0;
        hashmap['}'] = 0;

        for(char ch : s){
            hashmap[ch]++;
        }

 for (const auto& pair : hashmap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }


        if(hashmap.at('(') != hashmap.at(')')){
            return false;
        }

        if(hashmap.at('[') != hashmap.at(']')){
            
            return false;
        }

        if(hashmap.at('{') != hashmap.at('}')){
            return false;
        }

        return true;
    }
};

int main()
{
    Solution solution;

   string s = "[{(}]";

    bool result = solution.isValid(s);
    cout << "Result: " << result << endl;

    return 0;
}
