# 278. First Bad Version
  
<br>**Problem:** https://leetcode.com/problems/first-bad-version/<br>

**Difficulty:** Easy<br>
**Topics:** Binary Search, Interactive<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-09 20:11 local time

**Runtime:** 7 ms (beats 96.68409999999999%)
**Memory:** 12.5 MB (beats 13.026900000000005%)


<!-- leetgit:submissionId=2061843676 codeHash=7975317d5538030554efa51af6ed3427f73e6c07ad5286b0950d59552ca58647 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        left = 1
        right = n
        while(left<right):
            mid = (left + right) // 2
            if(isBadVersion(mid)):
                right =  mid
            else:
                left = mid + 1

        return left
        
```
