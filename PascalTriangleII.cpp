#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return {1};
        }
        if (rowIndex == 1) {
            return {1, 1};
        }
        vector<vector<int>> triangle;
        triangle.resize(rowIndex + 1);
        for (int i = 0; i <= rowIndex; ++i) {
            triangle[i].resize(i + 1, 1);
        }
        for (int i = 2; i <= rowIndex; ++i) {
            for (int j = 1; j < triangle[i].size() - 1; ++j) {
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
            }
        }
        return triangle[rowIndex];
    }
};