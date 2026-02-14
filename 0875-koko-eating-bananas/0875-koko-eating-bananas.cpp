class Solution {
public:
    int hrsLeft(vector<int> &arr, int h, int bperhr) {
        long long hr = 0;
        int i=0;
        int n = arr.size();
        
        while(i<n) {
            int toeat = arr[i];
            hr+=ceil(arr[i]/bperhr);
            if(arr[i]%bperhr !=0)
                hr+=1;
            if(hr>h)
                return -1;
            i++;
        }

        if(hr==h) {
            //Best case
            return 0;
        }
        return 1; // time left -> could be slower
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = INT_MIN;
        for(int each: piles) {
            r = max(r, each);
        }
        int mink = INT_MAX;
        while(l<=r) {
            int m = (l+r)/2;

            int res = hrsLeft(piles, h, m);
            if(res>=0) {
                //Time left, we could eat slower or valid case.
                mink = min(mink, m);
                r = m-1;
            } else {
                //Bananas left, we need to eat faster
                l = m+1;
            }
        }
        return mink;
    }
};