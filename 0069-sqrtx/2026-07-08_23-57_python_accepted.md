# 69. Sqrt(x)
  
<br>**Problem:** https://leetcode.com/problems/sqrtx/<br>

**Difficulty:** Easy<br>
**Topics:** Math, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-08 23:57 local time

**Runtime:** 7 ms (beats 26.342200000000002%)
**Memory:** 12.3 MB (beats 89.3207%)


<!-- leetgit:submissionId=2060919544 codeHash=14e511308f77c9cb70f5243204b711bf81d2cf53edeed46672c4409c4cf66297 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def mySqrt(self, x):
        left = 0
        right = x
        ans = 0
        while(left<=right):
            mid = (left+right) // 2
            if(mid * mid == x):
                return mid
            elif(mid * mid < x):
                left = mid + 1
                ans = mid
            else:
                right = mid -1
        return ans
        
```
