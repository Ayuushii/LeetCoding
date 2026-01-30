class Solution {
public:
    int bsearch(vector<int> &arr, int l, int h, int target) {
        while(l<=h) {
            int mid = (l+h)/2;
            if(target==arr[mid]) {
                return mid;
            }
            else if(target< arr[mid]){
                h=mid-1;
            } else {
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        for(i=0; i<n-1; i++) {
            if(nums[i+1]<nums[i])
                break;
        }
        int h = i;
        int l=0;
        int l2 = 0;
        int h2 = 0;
        if(i<n) {
            l2=i+1;
            h2 = n-1;
        }
        int ans = bsearch(nums, l, h, target);
        if(ans==-1){
            ans = bsearch(nums, l2, h2, target);
        }
        return ans;
    }
};