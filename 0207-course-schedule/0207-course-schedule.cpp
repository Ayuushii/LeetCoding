class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
        vector<int> indeg(numCourses);
        vector<int> ts;
        queue<int> q;

        for(int i=0;i<prerequisites.size();i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0; i<numCourses; i++){
            cout<<i<<"->";
            for(auto edge: adjList[i])
                cout<<edge<<",";
            cout<<endl;
        }
        for(int i=0;i<numCourses;i++){
            for(auto x: adjList[i])
                indeg[x]+=1;
        }
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int front = q.front();
            ts.push_back(front);
            q.pop();
            for(auto next:adjList[front]){
                indeg[next]--;
                if(indeg[next]==0)
                    q.push(next);
            }
        }
        if(ts.size()==numCourses)
            return true;
        return false;
    }
};