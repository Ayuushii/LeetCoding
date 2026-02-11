class Solution {
public:

    void dfs(int node, vector<int> &visited, vector<int>adj[]) {
        visited[node] = 1;
        for(auto edge: adj[node]){
            if(!visited[edge]){
                dfs(edge, visited, adj);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();

        vector<int> adj[V]; //array of vectors.
        for(int i=0; i<V; i++) {
            for(int j=0; j<V; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
/* Below is to check is adjList is created right from adjMatrix
        for(int i = 0;i<V;i++){
            cout<<"Edges of "<<i;
            for(auto edge:  adj[i]){
                cout<<" "<<edge<<" ";
            }
            cout<<endl;
        } */

        //Logic - Each component of graph is a provice. Call dfs for each component

        vector<int> visited(V);

        int node = 0;
        int count = 0;

        for(int i = 0;i<V;i++) {
            if(!visited[i]){
                dfs(i,visited,adj);
                count++;
            }
        }
        return count;
    }
};