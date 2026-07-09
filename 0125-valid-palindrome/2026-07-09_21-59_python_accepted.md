# 125. Valid Palindrome
  
<br>**Problem:** https://leetcode.com/problems/valid-palindrome/<br>

**Difficulty:** Easy<br>
**Topics:** Two Pointers, String<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-09 21:59 local time

**Runtime:** 15 ms (beats 72.59530000000002%)
**Memory:** 12.5 MB (beats 91.7887%)


<!-- leetgit:submissionId=2061964834 codeHash=33b51d12911816d48c61c1ec835ad9aabca394f46969f2a16d1865091e75984b notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def isPalindrome(self, s):
        left = 0
        right = len(s)-1
        while(left<right):
            while(left<right and not s[left].isalnum()):
                left = left + 1
            while(left<right and not s[right].isalnum()):
                right = right - 1
            if(s[left].lower()==s[right].lower()):
                left = left + 1
                right = right -1
            else:
                return False
        return True
        
```
