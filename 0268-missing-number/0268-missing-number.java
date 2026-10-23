class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        
        if(nums.length==1)
            {if(nums[0]==0)
                {return 1;
                }
             else  { return 0; }
            }
        else if(nums.length==2)
            {if(nums[nums.length-1]==2)
                {if(nums[0]==0)
                    {return 1;
                    } 
                 else  { return 0; }
                }
             else  { return (nums[nums.length-1]+1);}
            }
        else 
            {for(int i=0; (i+1)<nums.length; i++)
                {if(nums[i+1]!=(nums[i]+1))
                    {return (nums[i]+1);
                    }
                 else  { continue; }
                }
             if(nums[0]!=0)  { return 0; }
             return (nums[nums.length-1]+1);
            }
    }
}