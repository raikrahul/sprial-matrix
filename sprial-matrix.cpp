#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) return {}; // Handle empty matrix
        int cols = matrix[0].size();
        if (cols == 0) return {}; // Handle empty rows

        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;

        std::vector<int> results;

        while (top <= bottom && left <= right) {
            cout << "top: " << top << ", bottom: " << bottom << ", left: " << left << ", right: " << right << endl;

            cout << "Top Row: ";
            for (int i = left; i <= right; i++) {
                cout << matrix[top][i] << " ";
                results.push_back(matrix[top][i]);
            }
            cout << endl;
            top++;
            cout << "top incremented to: " << top << endl;


            cout << "Right Column: ";
            for (int i = top; i <= bottom; i++) {
                cout << matrix[i][right] << " ";
                results.push_back(matrix[i][right]);
            }
            cout << endl;
            right--;
            cout << "right decremented to: " << right << endl;

            if (top <= bottom) { // Check before bottom row
                cout << "Bottom Row: ";
                for (int i = right; i >= left; i--) {
                    cout << matrix[bottom][i] << " ";
                    results.push_back(matrix[bottom][i]);
                }
                cout << endl;
                bottom--;
                cout << "bottom decremented to: " << bottom << endl;
            } else {
                cout << "Skipping Bottom Row" << endl;
            }

            if (left <= right) { // Check before left column
                cout << "Left Column: ";
                for (int i = bottom; i >= top; i--) {
                    cout << matrix[i][left] << " ";
                    results.push_back(matrix[i][left]);
                }
                cout << endl;
                left++;
                cout << "left incremented to: " << left << endl;
            } else {
                cout << "Skipping Left Column" << endl;
            }
            cout << "----------------------" << endl;
        }

        return results;
    }
};

// int main() {
//     vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector<vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     vector<vector<int>> matrix3 = {{1,2},{3,4}};
//     Solution sol;
//     vector<int> result1 = sol.spiralOrder(matrix1);
//     cout << "Final Result 1: ";
//     for (int num : result1) {
//         cout << num << " ";
//     }
//     cout << endl;
//     vector<int> result2 = sol.spiralOrder(matrix2);
//     cout << "Final Result 2: ";
//     for (int num : result2) {
//         cout << num << " ";
//     }
//     cout << endl;
//     vector<int> result3 = sol.spiralOrder(matrix3);
//     cout << "Final Result 3: ";
//     for (int num : result3) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }