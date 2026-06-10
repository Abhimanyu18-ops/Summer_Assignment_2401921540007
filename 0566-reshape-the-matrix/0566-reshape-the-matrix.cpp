#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();        // number of rows in original matrix
        int n = mat[0].size();     // number of columns in original matrix

        // If reshape is not possible, return original matrix
        if (m * n != r * c) return mat;

        vector<vector<int>> result(r, vector<int>(c));
        int row = 0, col = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[row][col] = mat[i][j];
                col++;
                if (col == c) {
                    col = 0;
                    row++;
                }
            }
        }
        return result;
    }
};
