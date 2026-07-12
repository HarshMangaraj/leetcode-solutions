# 1. Two Sum
  
<br>**Problem:** https://leetcode.com/problems/two-sum/<br>

**Difficulty:** Easy<br>
**Topics:** Array, Hash Table<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-12 18:06 local time

**Runtime:** 0 ms (beats 100%)
**Memory:** 13 MB (beats 81.819%)


<!-- leetgit:submissionId=2064982083 codeHash=e405d9bf085b97208175a5506774b9604bcf255b5c8d5bd05678f5f408edb244 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def twoSum(self, nums, target):
        seen = {}
        for index,value in enumerate(nums):
            needed_number = target - value
            if(needed_number in seen):
                return [seen[needed_number], index]
            else:
                seen[value] = index
```
