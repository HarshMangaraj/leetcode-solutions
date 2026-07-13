# 49. Group Anagrams
  
<br>**Problem:** https://leetcode.com/problems/group-anagrams/<br>

**Difficulty:** Medium<br>
**Topics:** Array, Hash Table, String, Sorting<br>
**Language:** python<br>
**Status:** Accepted<br>
**Submitted:** 2026-07-13 19:08 local time

**Runtime:** 23 ms (beats 49.44099999999998%)
**Memory:** 15.9 MB (beats 84.94800000000002%)


<!-- leetgit:submissionId=2066181782 codeHash=619a5aa05ccece4384b5e043b14ae6139651b8f2f3e17c3ee9c6ae68df1da6a2 notesHash=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 -->

## Solution

```python
class Solution(object):
    def groupAnagrams(self, strs):
        group = {}
        for word in strs:
            sorted_word = ''.join(sorted(word))
            if(sorted_word in group):
                group[sorted_word].append(word)
            else:
                group[sorted_word]=[word]
        return list(group.values())
```
