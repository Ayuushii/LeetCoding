# Reverse sub array

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 31.78% | Points: 1

## Topics
**Arrays, Data Structures**

---

## Problem
<h3>Reverse sub array | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/reverse-sub-array5620/0">Problem Link</a></p>

---

## Solution
```cpp
// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        if(l>=r)
            return arr;
        
        swap(arr[l-1],arr[r-1]);
        return reverseSubArray(arr, l+1, r-1);
    }
};
```