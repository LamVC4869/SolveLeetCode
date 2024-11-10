#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        int rmd[26], ans = 0;
        fill(rmd, rmd + 26, 0);
        for (int i = 0; i < s.size(); ++i) {
            if (!rmd[s[i] - 'a']) {
                rmd[s[i] - 'a'] = 1;
                ++ans;
            }
        }
        return ans;
    }
};