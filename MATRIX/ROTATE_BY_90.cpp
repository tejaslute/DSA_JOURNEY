class Solution
{
    // Function to transpose a matrix
    static void transposeMatrix(int matrix[][], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    //Function to rotate matrix anticlockwise by 90 degrees.
    static void rotateby90(int matrix[][], int n)
    {
        // code here
        transposeMatrix(matrix, n);
        // reverse every column
        for (int i = 0; i < n; i++)
        {
            int low = 0, high = n - 1;
            while (low < high)
            {
                int temp = matrix[low][i];
                matrix[low][i] = matrix[high][i];
                matrix[high][i] = temp;
                low++;
                high--;
            }
        }
    }
}