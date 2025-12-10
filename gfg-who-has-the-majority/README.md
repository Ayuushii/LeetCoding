# Who has the majority?

## Platform
**GeeksForGeeks**

## Difficulty: Medium | Accuracy: Unknown | Points: 0

## Topics
**Algorithms**

---

## Problem
<h3>Who has the majority? | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/who-has-the-majority/0">Problem Link</a></p>

---

## Solution
```cpp
class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        int cx=0,cy=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==x)
                cx++;
            else if (arr[i]==y)
                cy++;
        }
        if(cy==cx)
            return x<y?x:y;
        return cx>cy?x:y;
    }
};
```