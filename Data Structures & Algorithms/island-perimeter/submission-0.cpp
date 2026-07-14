class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int perimeter = 0;
        int row = grid.size(), col = grid[0].size();
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        for(int r = 0; r<row; r++)
        {
            for(int c = 0; c<col; c++)
            {
                if(grid[r][c] == 1)
                {
                    for(int k = 0; k<4; k++)
                    {
                        int nr = r+dr[k];
                        int nc = c+dc[k];

                        if(nr<0 || nr>=row || nc<0 || nc>=col ) perimeter++;
                        else if(grid[nr][nc] == 0) perimeter++;
                    }
                }
            }
        }
        return perimeter;
    }
};