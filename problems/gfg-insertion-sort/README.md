# Insertion Sort

## Platform
**GeeksForGeeks**

## Difficulty: Easy | Accuracy: 66.61% | Points: 2

## Topics
**Sorting, Algorithms**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/insertion-sort/0)

<p><span style="font-size: 18px;">Given an array <strong>arr[] </strong>of positive integers.The task is to complete the <strong>insertsort()</strong> function which is used to implement Insertion Sort. </span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [4, 1, 3, 9, 7]
<strong>Output</strong>: [1, 3, 4, 7, 9]<br><strong>Explanation: </strong>The sorted array will be </span><span style="font-size: 14pt;">[1, 3, 4, 7, 9].</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
<strong>Output</strong>: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]<br></span><span style="font-size: 14pt;"><strong>Explanation: </strong>The sorted array will be [1, 2, 3, 4, 5, 6, 7, 8, 9, 10].</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [4, 1, 9]
<strong>Output</strong>: [1, 4, 9]<br><strong>Explanation: </strong>The sorted array will be </span><span style="font-size: 14pt;">[1, 4, 9]</span>.</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 1000<br>1 ≤ arr[i] ≤ 1000</span></p>

---

## Solution
```cpp

class Solution {
  public:
    // Please change the array in-place
    //LETS TRY USING RECURSION
    void insertBack(vector<int> &v, int ele) {
        
        int n = v.size();
        //BC - if v is empty just add ele or 
        //if ele is greater than v's last element just add ele to last because v is sorted.
        
        if(n==0 || v[n-1]<=ele) {
            v.push_back(ele);
            return;
        }
        
        //Hypothesis - insert in the smaller arr, store the last(bigger than ele)
        int val = v[n-1];
        v.pop_back();
        
        insertBack(v, ele);
        
        v.push_back(val);
        
    }
    
    
    void insertionSort(vector<int>& arr) {
        // code here
        //BC - single element is sorted
        int n = arr.size();
        if(n==1 || n==0)
            return;
        //Hypothesis - Sort smaller, store the last element before reducing the arr
        int last = arr[n-1];
        arr.pop_back();
        
        insertionSort(arr); //Returns sorted arr
        
        //Insert back the last element to it's right position
        insertBack(arr, last);
        
    }
};


```