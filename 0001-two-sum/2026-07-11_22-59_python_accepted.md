# 1. Two Sum
  
<br>**Problem:** https://leetcode.com/problems/two-sum/<br>

**Difficulty:** Easy<br>
**Topics:** Array, Hash Table<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-11 22:59 local time

**Runtime:** 0 ms (beats 100%)
**Memory:** 12.9 MB (beats 94.7828%)


<!-- leetgit:submissionId=2064129690 codeHash=0de5fe30af3942c50f1d1226771739d23e4a40a66341bc938ff8368eccb4c5b8 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def twoSum(self, nums, target):
        seen = {}
        for index,value in enumerate(nums):
            needed_number = target - value
            if(needed_number in seen):
                return [seen[needed_number],index]
            else:
                seen[value]=index
```
