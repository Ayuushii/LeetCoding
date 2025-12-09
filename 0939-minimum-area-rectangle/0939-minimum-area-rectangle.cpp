class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        //Idea -> Find points that form a diagonal
        //From those points, calculate other points of the rectangle
        //find if those exist in given
        //If yes calculate area
        unordered_map <int, unordered_set<int>> mp;
        int min_area = INT_MAX;
        for(auto point: points){
            mp[point[0]].insert(point[1]);
        }
        // for(auto x:mp){
        //     cout<<x.first<<"->";
        //     for(auto y:x.second)
        //         cout<<y<<",";
        //     cout<<endl;
        // }
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++) {
                int x1 = points[i][0], y1 = points[i][1];
                int x2 = points[j][0], y2 = points[j][1];

                if(x1!=x2 && y1!=y2) {
                    if(mp[x1].find(y2)!=mp[x1].end() && mp[x2].find(y1)!=mp[x2].end()){
                        min_area = min(min_area, abs(x1-x2)*abs(y1-y2));
                    }
                }
            }
        }
        return min_area!=INT_MAX?min_area:0;
    }
};