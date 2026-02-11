# Array insert at index

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 44.81% | Points: 1

## Topics
**Arrays, Data Structures**

---

## Problem
<h3>Array insert at index | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/array-insert-at-index/0">Problem Link</a></p>

---

## Solution
```cpp
class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        int n = arr.size();
        if(index==n)
            arr.push_back(val);
        else {
            arr.push_back(0);
            for(int i=arr.size();i>=index;i--){
                arr[i]=arr[i-1];
            }
            arr[index]=val;
        }
    }
};

```