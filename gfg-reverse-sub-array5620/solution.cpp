// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        if(l>=r)
            return arr;
        
        swap(arr[l-1],arr[r-1]);
        return reverseSubArray(arr, l+1, r-1);
    }
};