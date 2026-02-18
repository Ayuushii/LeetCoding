class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l = 0;
        int h = arr.size()-1;
        while(l<=h) {
            int m = l+(h-l)/2;
            if(arr[m]==target)
                return m;
            else if (arr[m]<target)
                l = m+1;
            else
                h=m-1;
        }
        return -1;
    }
};