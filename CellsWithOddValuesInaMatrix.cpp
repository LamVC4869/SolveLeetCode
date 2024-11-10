#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    void updateCol (vector<vector<int>>& grid, int pos, int size) {
        for (int row = 0; row < size; ++row) {
            grid[row][pos]++;
        }
    }

    void updateRow (vector<vector<int>>& grid, int pos, int size) {
        for (int col = 0; col < size; ++col) {
            grid[pos][col]++;
        }
    }

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (int i = 0; i < indices.size(); ++i) {
            updateRow(matrix, indices[i].front(), n);
            updateCol(matrix, indices[i].back(), m);
        }
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans += matrix[i][j] & 1;
            }
        }
        return ans;
    }
};