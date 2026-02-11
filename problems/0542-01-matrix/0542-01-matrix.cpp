class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        /* To find nearest 0 for each cell.
        Vice-versa: For every 0, if we find a 1, that 1 is 1 step away. Next 1 is 2 steps away. 
        */
        //Source points are 0s
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n,0));
        vector<vector<int>> vis(m, vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(mat[i][j]==0) {
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                } else {
                    vis[i][j] = 0;
                }
            }
        }

        int steps=0;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            steps = q.front().second;
            ans[r][c] = steps;
            q.pop();
            for(int i=0;i<4;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && vis[nr][nc]==0) {
                    // if(mat[nr][nc]==0)
                    //     q.push({{nr,nc},0});
                    // else if(mat[nr][nc]==1)
                    //     q.push({{nr,nc},steps+1});
                    vis[nr][nc] = 1;
                    q.push({{nr,nc},steps+1});
                }
            }
        }
        return ans;
    }
};