#include <iostream>
#include <string.h>

using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        long long sum(0);
        for (int i = 1; i < s.length(); ++i) {
            sum += abs((int)s[i] - (int)s[i-1]);
        }
        return sum;
    }
};