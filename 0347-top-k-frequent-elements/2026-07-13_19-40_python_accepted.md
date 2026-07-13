# 347. Top K Frequent Elements
  
<br>**Problem:** https://leetcode.com/problems/top-k-frequent-elements/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Hash Table, Divide and Conquer, Sorting, Heap (Priority Queue), Bucket Sort, Counting, Quickselect<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-13 19:40 local time

**Runtime:** 9 ms (beats 63.647600000000004%)
**Memory:** 13.9 MB (beats 97.2863%)


<!-- leetgit:submissionId=2066215814 codeHash=ab99e6475c386ae898c804aea3d153512256b0d0c50ffb4461963ce4a47fe637 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def topKFrequent(self, nums, k):
        count = {}
        for value in nums:
            if (value in count):
                count[value] = count[value] + 1
            else:
                count[value]=1
        sorted_keys = sorted(count.keys(), key=lambda x: count[x], reverse=True)
        return sorted_keys[:k]

        
```
