class Solution {
public:
    void reverseArr (vector<int> &arr, int m, int n){
        int temp;
        while(m<=n){
            temp = arr[m];
            arr[m] = arr[n];
            arr[n] = temp;
            m++;
            n--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        /* SOLUTION 1 - with O(n) space and using %
        vector<int> temp(n);
        for(int i=0;i<n;i++) {
            temp[(i+k)%n] = nums[i];
        }
        nums = temp; */

        /*SOLUTION 2 - Reverse part by part */
        while(k>n)
            k=k-n;
        reverseArr(nums, n-k, n-1);
        reverseArr(nums, 0, n-k-1);
        reverseArr(nums, 0, n-1);
    }
};