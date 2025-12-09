class Solution {
public:
    bool DFS(int node, vector<int> &vis, stack<int> &s, vector<vector<int>> &adjList, vector<int> &pathVis) {
        vis[node]=1;
        pathVis[node]=1;
        for(auto next: adjList[node]){
            if(!vis[next]){
                if(DFS(next, vis, s, adjList,pathVis))
                    return true;
            } else if(pathVis[next]) {
                    return true;
            }
        }
        pathVis[node] = 0;
        s.push(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
        stack<int> s;
        vector<int> ts;
        vector<int> vis(numCourses);
        vector<int> pathVis(numCourses);

        for(int i=0;i<prerequisites.size();i++) {
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        for(int i=0; i<numCourses; i++){
            cout<<i<<"->";
            for(auto edge: adjList[i])
                cout<<edge<<",";
            cout<<endl;
        }
        
        for(int i=0;i<numCourses;i++){
            if(!vis[i]) {
                if(DFS(i, vis, s, adjList, pathVis))
                    return {};
            }
        }

        while(!s.empty()){
            ts.push_back(s.top());
            s.pop();
        }
        return ts;
    }
};