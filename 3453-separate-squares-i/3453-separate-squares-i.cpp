class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        //Find the range for y
        double high = -DBL_MAX;
        double low = DBL_MAX;

        for(auto &s: squares) {
            low = min(low, (double)s[1]);
            high = max(high, (double)s[1]+s[2]);
        }
        //Use this range for binary search to find the required Y
        //Condition around the given allowed error range
        while((high-low) > 1e-6) {
            double mid = (high+low)/2.0;
            double above=0.0;
            double below=0.0;
            //Compute areas for all squares wrt this mid.
            // 3 scenarios - square completely above mid, square completely below mid,   
            // mid going through the square
            for(auto &s: squares) {
                double bottom = s[1];
                double top = s[1]+s[2];
                double side = s[2];
                
                if(top<=mid) {
                    //Square completely below mid
                    below += side*side;
                } else if(bottom>=mid){
                    //Square completely above mid
                    above += side*side;
                } else {
                    //Mid goes through the square
                    above += side*(top-mid);
                    below += side*(mid-bottom);
                }
            }
            //Depending on the areas try to make them equal
            if(above > below){
                low = mid;
            } else {
                high = mid;
            }
        }

        return (high+low)/2.0;
    }
};