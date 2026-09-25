class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentsum = 0;
        vector<int> sum;

        for(int i = 0; i < nums.size(); i++){
            currentsum = currentsum + nums[i];
            sum.push_back(currentsum);
        }

        return sum;
    }
};