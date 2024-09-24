#include <iostream>
#include <vector>

using namespace std;

void spiralPrint(const vector<vector<int>>& matrix) {
    if(matrix.empty()) return;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Print top row (left to right)
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // move the top boundary down

        // Print right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // move the right boundary left

        // Check if there's still a row to print (bottom row)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // move the bottom boundary up
        }

        // Check if there's still a column to print (left column)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // move the left boundary right
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralPrint(matrix);

    return 0;
}
