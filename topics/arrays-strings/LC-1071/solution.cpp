#include <iostream>
#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int len = gcd(str1.size(), str2.size());

        return str1.substr(0, len);
    }
};

int main() {
    Solution obj;

    string str1 = "ABCABC";
    string str2 = "ABC";

    cout << obj.gcdOfStrings(str1, str2);

    return 0;
}