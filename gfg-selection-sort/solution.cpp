class Solution {
  public:
    // Function to perform selection sort on the given array.
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    int select(vector<int> &arr, int i)
    {
        // code here such that selecionSort() sorts arr[]
        for (int k=i;k>=0;k--)
        {
            if (arr[k]>arr[i])
            i=k;
        }
        return i;
    }
    void selectionSort(vector<int> &arr) {
        // code here
        int i, j;
        int n = arr.size();
        for (i = n-1; i >=0; i--)      
        {
            int j = select(arr, i);
            swap(&arr[i], &arr[j]);
        }
    }
};