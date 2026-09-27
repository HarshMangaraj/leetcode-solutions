class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualSum =0;
        int expectedSum =0;
        for(int i =0;i<nums.size();i++){
            actualSum = actualSum + nums[i];
        }
        for(int i =0;i<=nums.size();i++){
            expectedSum = expectedSum + i;
        }
        int missingNumber = expectedSum - actualSum;
        return missingNumber;
    }
};