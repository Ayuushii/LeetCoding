# Occurences of Anagrams

## Platform
**GeeksForGeeks**

## Difficulty: Medium | Accuracy: 48.09% | Points: 4

## Topics
**Sliding Window, Arrays, Data Structures, Algorithms**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1)

<p><span style="font-size: 18px;">Given a word <strong>pat</strong>&nbsp;and a text <strong>txt</strong>. Return the count of the occurrences of anagrams of the word in the text.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>txt = "forxxorfxdofr", pat = "for"
<strong>Output:</strong> 3
<strong>Explanation:</strong> <strong>for, orf</strong> and <strong>ofr </strong>appears in the <strong>txt, </strong>hence answer is 3.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>txt = "aabaabaa", pat = "aaba"
<strong>Output:</strong> 4
<strong>Explanation:</strong>&nbsp;<strong>aaba</strong> is present 4 times in <strong>txt</strong>.
</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;=&nbsp;|pat| &lt;= |txt|&nbsp;&lt;= 10<sup>5</sup><br>Both strings contain lowercase English letters.</span></p>

---

## Solution
```cpp
// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int k = pat.length();
        unordered_map<char, int> mp;
        int count=0;
        for(char c: pat) {
            mp[c]++;
        }
        int i=0;
        for(int j=0; j<txt.length(); j++) {
            if(mp.find(txt[j])!=mp.end())
                mp[txt[j]]--;
            if(j-i+1 == k) {
                //window hit, the freq of each should be 0
                int flag=0;
                for(const auto &e: mp){
                    if(e.second!=0){
                        flag=1;
                        break;
                    }
                }
                //All freq of pat were 0 so found.
                if(flag==0)
                    count++;
                if(mp.find(txt[i])!=mp.end())
                    mp[txt[i]]++;
                i++;
            }
        }
        return count;
    }
};
```