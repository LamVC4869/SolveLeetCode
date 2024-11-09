#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for (int i = 0; i < nums.size(); ++i) {
            int total = target - nums[i];
            if (pos.count(total))
                return {pos[total], i};
            pos[nums[i]] = i;
        }
        return {};
    }
};