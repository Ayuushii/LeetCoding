class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int prevcolr = image[sr][sc];
        if(prevcolr==color)
            return image;
        int m = image.size();
        int n = image[0].size();
        int vis[m][n];
        for(int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                vis[i][j]=0;
            }
        }

        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;
        vis[sr][sc]=color;

        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};
        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 && nc>=0 && nr<m && nc<n && 
                    image[nr][nc]==prevcolr && vis[nr][nc]==0) {
                        image[nr][nc]=color;
                        q.push({nr,nc});
                }
            }
        }
        return image;
    }
};