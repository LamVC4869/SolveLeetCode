#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    #define len(s) s.size()
    bool check (int a, int b) {
        return (a & 1 && !(b & 1)) || (!(a & 1) && b & 1);
    }
    bool isArraySpecial(vector<int>& nums) {
        if (len(nums) == 1) return true;
        if (len(nums) == 2) {
            return check(nums[0], nums[1]) ? true : false;
        }
        for (int i = 1; i < len(nums); ++i) {
            if (!check(nums[i], nums[i-1])) {
                return false;
            }
        }
        return true;
    }
};