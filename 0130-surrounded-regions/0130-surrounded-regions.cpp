class Solution {
public:
    void DFS(int r, int c, int m, int n, vector<vector<int>> &vis, vector<vector<char>> &board) {
        vis[r][c] = 1;
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        cout<<r<<" "<<c<<endl;

        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && vis[nr][nc]==0 && board[nr][nc]=='O')
                DFS(nr,nc,m,n,vis,board);
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));

        /*Do DFS from boundary elements and mark them visited. They cant 
        ever be surrounded. Else all can be. Boundary elements and their edges and
        their edges... cant be surrounded. */

        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && !vis[i][0]) {
                DFS(i, 0, m, n, vis, board);
            } 
            if(board[i][n-1]=='O' && !vis[i][n-1]) {
                DFS(i, n-1, m, n, vis, board);
            }
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O' && !vis[0][j]) {
                DFS(0, j, m, n, vis, board);
            }
            if(board[m-1][j]=='O' && !vis[m-1][j]) {
                DFS(m-1, j, m, n, vis, board);
            }
        }
        for(int i=0;i<m;i++){
            for(int j =0; j<n;j++){
                if(vis[i][j]!=1)
                    board[i][j]='X';
            }
        }
    }
};