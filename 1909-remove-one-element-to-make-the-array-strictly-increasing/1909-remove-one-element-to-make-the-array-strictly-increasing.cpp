class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        for(int remove = 0; remove < nums.size(); remove++)
        {
            bool flag = true;
            
            for(int i = 0; i < nums.size() - 1; i++)
            {
                if(i == remove)
                {
                    continue;
                }
                
                int next = i + 1;
                
                if(next == remove)
                {
                    next++;
                }
                
                if(next < nums.size())
                {
                    if(nums[i] >= nums[next])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            
            if(flag)
            {
                return true;
            }
        }
        
        return false;
    }
};