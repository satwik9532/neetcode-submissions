class NumMatrix {
    private:
     vector<vector<int>> sumMat;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        sumMat = vector<vector<int>>(row+1, vector<int>(col+1,0));

        for(int i = 1; i<=row;i++)
        {
            for(int j = 1; j<=col; j++)
            {
                sumMat[i][j]  = matrix[i-1][j-1] 
                + sumMat[i][j-1] + sumMat[i-1][j] - sumMat[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++; col1++; row2++; col2++;
        int res = 0;
        res = sumMat[row2][col2] - sumMat[row2][col1-1] -
        sumMat[row1-1][col2] + sumMat[row1-1][col1-1];

        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */