# 35. Search Insert Position
  
<br>**Problem:** https://leetcode.com/problems/search-insert-position/<br>

**Difficulty:** Easy<br>
**Topics:** Array, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-08 22:32 local time

**Runtime:** 0 ms (beats 100%)
**Memory:** 13 MB (beats 28.991100000000003%)


<!-- leetgit:submissionId=2060802465 codeHash=7f068c06aac599c0d42b976e1c3f38073e105de52283305d838c4db3139cea19 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def searchInsert(self, nums, target):
        left = 0
        right =  len(nums)-1
        while(left<=right):
            mid = (left + right) //2

            if(nums[mid]==target):
                return mid
            elif(nums[mid]<target):
                left=mid+1
            else:
                right=mid-1
            
        return left
        
```
