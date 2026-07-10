# 15. 3Sum
  
<br>**Problem:** https://leetcode.com/problems/3sum/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Two Pointers, Sorting<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-10 19:57 local time

**Runtime:** 646 ms (beats 86.05470000000005%)
**Memory:** 18.2 MB (beats 78.8877%)


<!-- leetgit:submissionId=2062948559 codeHash=18308c1edb9d1029eb59c75f0ff6ab5874efd2e286efff8fa76ef9e8710baaed notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        result = []
        for i in range(len(nums)):
            left = i + 1
            right = len(nums)-1
            fixed_number=nums[i]
            if(i>0 and fixed_number == nums[i-1]):
                continue
            target_number = -fixed_number
            while(left<right):
                current_num = nums[left] + nums[right]
                if(current_num == target_number):
                    result.append([fixed_number,nums[left],nums[right]])
                    left= left+1
                    right = right-1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
                elif(current_num<target_number):
                    left = left+1
                else:
                    right = right - 1
        return result
```
