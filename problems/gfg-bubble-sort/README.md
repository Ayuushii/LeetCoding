# Bubble Sort

## Platform
**GeeksForGeeks**

## Difficulty: Easy | Accuracy: 59.33% | Points: 2

## Topics
**Sorting, Algorithms**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/bubble-sort/0)

<p><span style="font-size: 14pt;">Given an array,&nbsp;<strong>arr[]</strong>. Sort the array using bubble sort algorithm.<br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples :<br></strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [4, 1, 3, 9, 7]
<strong>Output</strong>: [1, 3, 4, 7, 9]<br><strong>Explanation: </strong>After Sorting the array in ascending order of their values is [1, 3, 4, 7, 9].</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
<strong>Output</strong>: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]<br><strong>Explanation: </strong>Sort the array in ascending order of their values.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [1, 2, 3, 4, 5]
<strong>Output</strong>: [1, 2, 3, 4, 5]</span><br><span style="font-size: 14pt;"><strong>Explanation</strong>: An array that is already sorted should remain unchanged after applying bubble sort.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>3</sup><br>1 ≤ arr[i] ≤ 10<sup>3</sup></span></p>

---

## Solution
```cpp
class Solution {
  public:
    
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
            if (swapped == false)
                return;
        }
    }
};
```