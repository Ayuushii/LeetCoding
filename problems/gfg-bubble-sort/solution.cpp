class Solution {
  public:
    
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
            if (swapped == false)
                return;
        }
    }
};