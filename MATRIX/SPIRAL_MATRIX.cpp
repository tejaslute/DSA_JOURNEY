// SPIRAL_MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;
        int startingCol = 0;
        int count = 0;
        int total = row * col;
        while (count < total)
        {
            for (int index = startingCol; index <= endingCol && count < total; index++)
            {
                v.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            for (int index = startingRow; index <= endingRow && count < total; index++)
            {
                v.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            for (int index = endingCol; index >= startingCol && count < total; index--)
            {
                v.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow++;

            for (int index = endingRow; index >= startingRow && count < total; index--)
            {
                v.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;

        }
        return v;
    }
};