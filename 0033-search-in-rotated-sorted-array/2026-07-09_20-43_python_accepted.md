# 33. Search in Rotated Sorted Array
  
<br>**Problem:** https://leetcode.com/problems/search-in-rotated-sorted-array/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-09 20:43 local time

**Runtime:** 1 ms (beats 9.891800000000003%)
**Memory:** 12.5 MB (beats 80.63889999999999%)


<!-- leetgit:submissionId=2061878170 codeHash=4acee49e4f733d4e8c06f3c2016b8fb4d88d70aeebace6523e97f4c6b2301330 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def search(self, nums, target):
        left = 0
        right = len(nums)-1
        while(left<=right):
            mid = (left + right)//2
            if(nums[mid]==target):
                return mid
            elif(nums[left]<=nums[mid]):
                if(nums[left]<=target<nums[mid]):
                    right = mid -1
                else:
                    left = mid + 1
            else:
                if(nums[right]>=target > nums[mid]):
                    left = mid + 1
                else:
                    right = mid -1
        return -1
```
