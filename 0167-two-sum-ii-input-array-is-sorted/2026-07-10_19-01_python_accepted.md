# 167. Two Sum II - Input Array Is Sorted
  
<br>**Problem:** https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Two Pointers, Binary Search<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-10 19:01 local time

**Runtime:** 3 ms (beats 86.1084%)
**Memory:** 12.7 MB (beats 82.83699999999999%)


<!-- leetgit:submissionId=2062897510 codeHash=95bce130dcab64e7dd90a5fedde5b8d906fdefa23141a0650279996685d53edc notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def twoSum(self, numbers, target):
        left = 0
        right = len(numbers)-1

        while(left<right):
            if(numbers[right]+numbers[left]==target):
                return [left+1,right+1]
            elif(numbers[right]+numbers[left]<target):
                left = left + 1
            else:
                right = right -1
        return -1
            
        
```
