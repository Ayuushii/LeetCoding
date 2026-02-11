# Remove Spaces

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 49.21% | Points: 1

## Topics
**Strings, Data Structures**

---

## Problem
<h3>Remove Spaces | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/remove-spaces0128/0">Problem Link</a></p>

---

## Solution
```cpp
class Solution {
  public:
    string modify(string& s) {
        // code here.
        for(int i=0;i<s.length();i++){
            if(isspace(s[i])){
                s.erase(s.begin()+i--);
            }
        }
        return s;
    }
};
```