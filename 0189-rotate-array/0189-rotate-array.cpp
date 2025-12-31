class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //If k is bigger than n, better to do. Rotate by k is same as rotate by k%n
        k = k%n;
        int count = 0;
        int start = 0;
        while(count<n){
            //Need to track if we dont repeat the same cycle
            int current = start;
            int prev = nums[start];
            do {
                int nextpos = (current+k)%n;
                int temp = nums[nextpos];
                nums[nextpos] = prev;
                prev = temp;
                current = nextpos;
                count++;
            } while(current!=start);
            start++;
        }
    }
};