#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (const int& num : nums) {
            mp[num]++;
        }
        int result(0);
        for (const auto& it : mp) {
            if (it.second == 1) {
                result += it.first;
            }
        }
        return result;
    }
};