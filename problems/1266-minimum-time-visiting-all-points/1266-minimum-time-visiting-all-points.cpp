class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int total = 0;
        int i = 0;
        while(i<points.size()-1) {
            int didboth = 0;
            if (points[i][0]!=points[i+1][0]) {
                total++;
                didboth++;
                if(points[i][0]<points[i+1][0])
                    points[i][0]++;
                else
                    points[i][0]--;
            }
            if (points[i][1]!=points[i+1][1]) {
                total++;
                didboth++;
                if(points[i][1]<points[i+1][1])
                    points[i][1]++;
                else 
                    points[i][1]--;
            }
            if(didboth==0)
                i++;
            if(didboth==2)
                total--;
        }
        return total;
    }
};