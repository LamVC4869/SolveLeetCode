#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int i = 0, even(0), odd(0);
        while (n) {
            if (n & 1) {
                i % 2 == 0 ? even++ : odd++;
            }
            i++;
            n /= 2;
        }
        return {even, odd};
    }
};