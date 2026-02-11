class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        for(auto a: arr){
            if(a>largest){
                largest = a;
            }
        }
        return largest;
    }
};
