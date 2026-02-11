# Factorial

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 40.58% | Points: 1

## Topics
**Mathematical, Algorithms**

---

## Problem
<p><span style="font-size: 18px;">Given a positive integer, <strong>n</strong>. Find the factorial of <strong>n</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 5
<strong>Output: </strong>120
<strong>Explanation: </strong>1 x 2 x 3 x 4 x 5 = 120</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4
<strong>Output: </strong>24
<strong>Explanation: </strong>1 x 2 x 3 x 4 = 24</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 ≤ n ≤ 12</span></p>

---

## Solution
```cpp
class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==1 || n==0)
            return 1;
        return n*factorial(n-1);
    }
};
```