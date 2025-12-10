# Largest Element in Array

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 67.48% | Points: 1

## Topics
**Arrays, Data Structures**

---

## Problem
<p><span style="font-size: 14pt;">Given an array <strong>arr[].</strong><strong> </strong>The task is to find the largest element and return it.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 8, 7, 56, 90]
<strong>Output: </strong>90
<strong>Explanation: </strong>The largest element of the given array is 90.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [5, 5, 5, 5]
<strong>Output: </strong>5
<strong>Explanation: </strong>The largest element of the given array is 5.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [10]
<strong>Output: </strong>10
<strong>Explanation: </strong>There is only one element which is the largest.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong>1 &lt;= arr.size()&lt;= 10<sup>6</sup><br>0 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p>

---

## Solution
```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        for(auto a: arr){
            if(a>largest){
                largest = a;
            }
        }
        return largest;
    }
};

```