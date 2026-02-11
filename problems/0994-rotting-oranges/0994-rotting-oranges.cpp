class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //use bfs. need to eliminate all at same level at a time.
        int cntFresh = 0;
        int rotten = 0;
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        int visited[m][n];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
                if(grid[i][j]==1)
                    cntFresh++;
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};

        int tm = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(t,tm);
            for(int i=0;i<4;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 && nr<m &&
                    nc>=0 && nc<n &&
                    visited[nr][nc]==0 && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        visited[nr][nc]=1;
                        q.push({{nr,nc},t+1});
                        rotten++;
                }
            }
        }
        if(cntFresh!=rotten)
            return -1;
        return tm;
    }
};