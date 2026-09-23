class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0, numsSize = nums.size();
        for(int i=0; i<numsSize; i++)
            {ans ^= nums[i];
            }
        return ans;
    }
};