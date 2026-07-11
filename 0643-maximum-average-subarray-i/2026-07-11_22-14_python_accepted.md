# 643. Maximum Average Subarray I
  
<br>**Problem:** https://leetcode.com/problems/maximum-average-subarray-i/<br>

**Difficulty:** Easy<br>
**Topics:** Array, Sliding Window<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-11 22:14 local time

**Runtime:** 51 ms (beats 85.8745%)
**Memory:** 19.2 MB (beats 16.663199999999975%)


<!-- leetgit:submissionId=2064081498 codeHash=236e45fd0b5978e8b033024ac01f73bc2e93ae56f1b6a94d9547c668adb0ecc4 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def findMaxAverage(self, nums, k):
        left = 0
        right = k-1
        current_sum = 0
        while(left<=right):
            current_sum += nums[left]
            left = left + 1
        max_sum = current_sum
        for i in range(k,len(nums)):
            removed_index = i - k
            current_sum = current_sum - nums[removed_index] + nums[i]
            if(current_sum>max_sum):
                max_sum = current_sum
        return max_sum/float(k)
            
        
```
