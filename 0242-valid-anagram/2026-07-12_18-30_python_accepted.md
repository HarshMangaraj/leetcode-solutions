# 242. Valid Anagram
  
<br>**Problem:** https://leetcode.com/problems/valid-anagram/<br>

**Difficulty:** Easy<br>
**Topics:** Hash Table, String, Sorting<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-12 18:30 local time

**Runtime:** 11 ms (beats 95.9104%)
**Memory:** 12.5 MB (beats 67.5087%)


<!-- leetgit:submissionId=2065004238 codeHash=ba804a3def2207d4cde4a69c91875a389f32bc30e9aca86c2560b3d1ed4f21a0 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def isAnagram(self, s, t):
        letter = {}
        for value in s:
            if value in letter:
                letter[value] = letter[value] + 1
            else:
                letter[value] = 1
        for value in t:
            if value in letter:
                letter[value] = letter[value] - 1
            else:
                return False
        for count in letter.values():
            if(count != 0):
                return False
        return True
```
