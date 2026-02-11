class Solution {
public:
    int count = 0;
    void numperm(int pos, int n, vector<bool> used) {
        if(pos>n) {
            count++;
            return;
        }
        for(int num=1; num<=n; num++) {
            if(used[num]) continue;
            if(num%pos==0 || pos%num==0) {
                used[num] = true;
                numperm(pos+1, n, used);
                used[num] = false;
            }
        }
    }


    int countArrangement(int n) {
        //Brute force - form all permutations - n! and then check

        /*Backtrack - find correct number for that position using the rule 
        and then mark it used and go doing the same thing till we fill all
        positions and then we have found the permutation */
        vector<bool> used(n+1, false);
        numperm(1, n, used);
        return count;

    }
};