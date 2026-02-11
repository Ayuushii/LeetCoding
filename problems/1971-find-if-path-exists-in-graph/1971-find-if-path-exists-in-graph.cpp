class Solution {
public:
    /*DFS SOLUTION*/
    bool dfs(vector<vector<int>> &adjList, vector<int> &vis, int src, int dest){
        if(src==dest)
            return true;
        vis[src]=1;
        for(auto &edge: adjList[src]){
            if(vis[edge]==0){
                if(dfs(adjList, vis, edge, dest)) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        vector<int> vis(n,0);
        for(auto &edge: edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }

        return dfs(adjList, vis, source, destination);
        //(vis[destination]==1)?true:false;
    }
    /*BFS SOLUTION
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        queue<int> q;
        vector<int> visited(n, 0);

        for(auto &edge: edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        q.push(source);
        visited[source] = 1;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            if(f==destination)
                return true;
            for(int &edge: adjList[f]){
                if(visited[edge]==0){
                    q.push(edge);
                    visited[edge]=1;
                }
            }
        }
        return false;
    }*/
};