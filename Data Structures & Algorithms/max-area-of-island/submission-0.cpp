class Solution {
public:
    int dfs(vector<vector<int>>& grid, int row, int col, int i, int j)
    {
        if( i < 0 || i >= row || j < 0 || j >= col )
     {
        return 0;
     }
       if (grid[i][j] == 0)
        return 0;

    // Mark as visited
    grid[i][j] = 0;

    return 1 + dfs(grid, row, col, i+1, j) + dfs(grid, row, col, i-1, j) + dfs(grid, row, col, i, j+1) + dfs(grid, row, col, i, j-1);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;

        int row = grid.size();
        int col = grid[0].size();

        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(grid[i][j] == 1)
                {
                    int tem = dfs(grid, row, col, i, j);
                    ans = max(ans,tem);
                }
            }
        }

        return ans;
    }
};
