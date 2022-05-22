// COUNT_ZERO_IN_SORTED.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

int countZeros(vector<vector<int>>matrix)
{
	int row = matrix.size();
	int col = matrix[0].size();

	int count = 0;
 
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				count++;
			}
		}
	}
	return count;
