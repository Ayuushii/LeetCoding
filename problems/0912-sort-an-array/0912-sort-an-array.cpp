class Solution {
public:
    void merge(vector<int> &nums, int s, int e) {
        vector<int> temp;
        int mid = s+(e-s)/2;
        int r = mid+1;
        int l = s;
        while(l<=mid && r<=e){
            if(nums[l]<=nums[r])
                temp.push_back(nums[l++]);
            else
                temp.push_back(nums[r++]);
        }
        while(l<=mid)
            temp.push_back(nums[l++]);
        while(r<=e)
            temp.push_back(nums[r++]);
        for(int i=s;i<=e;i++){
            nums[i]=temp[i-s];
        }
    }
    void MergeDiv(vector<int> &nums, int s, int e) {
        if(s>=e)
            return;
        int mid = s+(e-s)/2;
        MergeDiv(nums, s, mid);
        MergeDiv(nums, mid+1, e);
        merge(nums, s, e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        MergeDiv(nums, 0, n-1);
        return nums;
    }
};