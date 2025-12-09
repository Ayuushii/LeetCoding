class Solution {
public:
    void DFS(int r, int c, int m, int n, vector<vector<int>> &grid) {

        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};

        for(int i = 0; i<4; i++) {
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==1){
                grid[nr][nc]=0;
                DFS(nr, nc, m, n, grid);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // for(int i=0; i<m; i++) {
        //     if(grid[i][0]==1){
        //         grid[i][0]=0;
        //         DFS(i, 0, m, n, grid);
        //     }
        //     if(grid[i][n-1]==1){
        //         grid[i][n-1]=0;
        //         DFS(i, n-1, m, n, grid);
        //     }
        // }

        // for(int j=0; j<n; j++) {
        //     if(grid[0][j]==1){
        //         grid[0][j]=0;
        //         DFS(0, j, m, n, grid);
        //     }
        //     if(grid[m-1][j]==1){
        //         grid[m-1][j]=0;
        //         DFS(m-1, j, m, n, grid);
        //     }
        // }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==m-1 || j==n-1){
                    if(grid[i][j]==1) {
                        grid[i][j]=0;
                        DFS(i, j, m, n, grid);
                    }
                }
            }
        }

        int count=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++){
                if(grid[i][j]==1)
                    count++;
            }
        }
        return count;
    }
};