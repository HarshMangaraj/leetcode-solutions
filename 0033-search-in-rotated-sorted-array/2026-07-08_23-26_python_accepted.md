# 33. Search in Rotated Sorted Array
  
<br>**Problem:** https://leetcode.com/problems/search-in-rotated-sorted-array/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-08 23:26 local time

**Runtime:** 0 ms (beats 100%)
**Memory:** 12.4 MB (beats 80.60010000000001%)


<!-- leetgit:submissionId=2060877094 codeHash=adff5b26ee478f982a4be3632bb98f6d128b3be5db721b230e379ede4f60e2cd notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def search(self, nums, target):
        left = 0
        right = len(nums)-1
        while(left<=right):
            mid = (left+right)//2
            if(nums[mid]==target):
                return mid
            elif(nums[left]<=nums[mid]):
                if(nums[left]<=target<nums[mid]):
                    right = mid - 1
                else:
                    left = mid + 1
            elif(nums[mid]<= nums[right]):
                if(nums[mid]< target <= nums[right]):
                    left = mid + 1
                else:
                    right = mid -1
        return -1
        
```
