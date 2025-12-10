# Sorted Array Search

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 48.03% | Points: 1

## Topics
**Searching, Binary Search, Algorithms**

---

## Problem
<h3>Sorted Array Search | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/who-will-win-1587115621/0">Problem Link</a></p>

---

## Solution
```cpp
class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int N = arr.size();
        int l = 0;
        int h = N-1;
        while(l<=h){
            int m = l + (h-l)/2;
            if(arr[m]==k)
                return true;
            if(arr[m]<k)
                l = m+1;
            else
                h = m-1;
        }
        return false;
    }
};
```