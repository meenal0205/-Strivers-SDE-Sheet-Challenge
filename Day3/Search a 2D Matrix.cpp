class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int row = 0, col = matrix[0].size() - 1;
        while (row < rows && col > -1)
        {
            if (target == matrix[row][col])
                return true;
            else if (target > matrix[row][col])
                row++;
            else
                col--;
        }
        return false;
    }
};