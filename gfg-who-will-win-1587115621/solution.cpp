class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int N = arr.size();
        int l = 0;
        int h = N-1;
        while(l<=h){
            int m = l + (h-l)/2;
            if(arr[m]==k)
                return true;
            if(arr[m]<k)
                l = m+1;
            else
                h = m-1;
        }
        return false;
    }
};