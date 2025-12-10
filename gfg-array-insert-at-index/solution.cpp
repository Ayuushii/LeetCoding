class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        int n = arr.size();
        if(index==n)
            arr.push_back(val);
        else {
            arr.push_back(0);
            for(int i=arr.size();i>=index;i--){
                arr[i]=arr[i-1];
            }
            arr[index]=val;
        }
    }
};
