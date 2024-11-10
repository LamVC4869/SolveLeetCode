#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void update (int left, int right, vector<int>& vec) {
        for (int i = left; i <= right; ++i) {
            vec[i] = max(0, vec[i] - 1);
        }
    }
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;
        int i = 0, n = batteryPercentages.size();
        while (i < n) {
            if (batteryPercentages[i] > 0) {
                count++;
                update(i + 1, n - 1, batteryPercentages);
            }
            ++i;
        }
        return count;
    }
};