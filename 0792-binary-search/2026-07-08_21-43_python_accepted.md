# 792. Binary Search
  
<br>**Problem:** https://leetcode.com/problems/binary-search/<br>

**Difficulty:** Easy<br>
**Topics:** Array, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-08 21:43 local time

**Runtime:** 0 ms (beats 100%)
**Memory:** 13.3 MB (beats 34.81930000000002%)


<!-- leetgit:submissionId=2060737210 codeHash=6bb96c73ec45096226ff64a33c582d7eea11b1b1adaf0b344594d3da733de193 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def search(self, nums, target):
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return -1
```
