# Strongest Neighbour

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 57.04% | Points: 1

## Topics
**Arrays, Data Structures**

---

## Problem
<h3>Strongest Neighbour | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/strongest-neighbour/0">Problem Link</a></p>

---

## Solution
```cpp
class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        // code here
        vector<int> ans;
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            ans.push_back(max(arr[i],arr[i+1]));
        }
        return ans;
    }
};
```