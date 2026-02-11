class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        int cx=0,cy=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==x)
                cx++;
            else if (arr[i]==y)
                cy++;
        }
        if(cy==cx)
            return x<y?x:y;
        return cx>cy?x:y;
    }
};