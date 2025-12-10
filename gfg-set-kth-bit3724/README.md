# Set kth bit

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 72.71% | Points: 1

## Topics
**Bit Magic, Data Structures**

---

## Problem
<p><span style="font-size: 18px;">Given a number <strong>n</strong> and a value <strong>k</strong>. From the right, set the kth bit in the binary representation of n. The position of the Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on.&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 10, k = 2</span>
<span style="font-size: 18px;"><strong>Output: </strong>14</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>Binary representation of the given number 10 is: 1 0 1 0, number of bits in the binary reprsentation is 4. Thus 2nd bit from right is 0. The number after changing this bit to 1 is: 14(1 1 1 0).</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 15, k = 3</span>
<span style="font-size: 18px;"><strong>Output: </strong>15</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>The binary representation of the given number 15 is: 1 1 1 1, number of bits in the binary representation is 4. Thus 3rd bit from the right is 1. The number after changing this bit to 1 is 15(1 1 1 1).</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>9</sup></span><br><span style="font-size: 18px;">0 &lt;= k &lt; x, where x is the number of bits in the binary representation of n.</span></p>

---

## Solution
```cpp
class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        return((1<<k) | n);
    }
};

```