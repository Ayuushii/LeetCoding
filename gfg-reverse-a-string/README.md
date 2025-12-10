# Reverse a String

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 69.49% | Points: 1

## Topics
**Strings, Data Structures**

---

## Problem
<h3>Reverse a String | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/reverse-a-string/0">Problem Link</a></p>

---

## Solution
```cpp
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        reverse(s.begin(), s.end());
        return s;
    }
};

```