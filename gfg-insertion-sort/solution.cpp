
class Solution {
  public:
    // Please change the array in-place
    //LETS TRY USING RECURSION
    void insertBack(vector<int> &v, int ele) {
        
        int n = v.size();
        //BC - if v is empty just add ele or 
        //if ele is greater than v's last element just add ele to last because v is sorted.
        
        if(n==0 || v[n-1]<=ele) {
            v.push_back(ele);
            return;
        }
        
        //Hypothesis - insert in the smaller arr, store the last(bigger than ele)
        int val = v[n-1];
        v.pop_back();
        
        insertBack(v, ele);
        
        v.push_back(val);
        
    }
    
    
    void insertionSort(vector<int>& arr) {
        // code here
        //BC - single element is sorted
        int n = arr.size();
        if(n==1 || n==0)
            return;
        //Hypothesis - Sort smaller, store the last element before reducing the arr
        int last = arr[n-1];
        arr.pop_back();
        
        insertionSort(arr); //Returns sorted arr
        
        //Insert back the last element to it's right position
        insertBack(arr, last);
        
    }
};

