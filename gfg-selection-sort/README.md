# Selection Sort

## Platform
**GeeksForGeeks**

## Difficulty: Easy | Accuracy: 64.33% | Points: 2

## Topics
**Sorting, Algorithms**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/selection-sort/0)

<p><span style="font-size: 18px;">Given an array <strong>arr</strong>, use <strong>selection sort </strong>to sort arr[] in increasing order.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [4, 1, 3, 9, 7]</span>
<span style="font-size: 18px;"><strong>Output: </strong>[1, 3, 4, 7, 9]</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>Maintain sorted (in bold) and unsorted subarrays. Select 1. Array becomes <strong>1</strong> 4 3 9 7. Select 3. Array becomes <strong>1 3</strong> 4 9 7. Select 4. Array becomes <strong>1 3 4</strong> 9 7. Select 7. Array becomes <strong>1 3 4 7</strong> 9. Select 9. Array becomes <strong>1 3 4 7 9</strong>.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]</span>
<span style="font-size: 18px;"><strong>Output: </strong>[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]<br></span></pre>
<pre><strong>Input: </strong>arr[] = [38, 31, 20, 14, 30]
<strong>Output: </strong>[14, 20, 30, 31, 38]</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>3<br></sup>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p>

---

## Solution
```cpp
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    int select(vector<int> &arr, int i)
    {
        // code here such that selecionSort() sorts arr[]
        for (int k=i;k>=0;k--)
        {
            if (arr[k]>arr[i])
            i=k;
        }
        return i;
    }
    void selectionSort(vector<int> &arr) {
        // code here
        int i, j;
        int n = arr.size();
        for (i = n-1; i >=0; i--)      
        {
            int j = select(arr, i);
            swap(&arr[i], &arr[j]);
        }
    }
};
```