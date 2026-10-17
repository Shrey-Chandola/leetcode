class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();

// STEP 1.) Find the Pivot(the ele from where ele are in  decreasing order)
// E.g : arr = [1, 2, 3, 6, 5, 4] pivot ele for arr is 3 as condi. for piv is, arr[i]<arr[i+1]   
        for(int i=(n-2); i>=0; i--)
            {if(nums[i]<nums[i+1])
                {pivot = i;
                 break;
                }
            }
// EDGE CASE : If Array is in descending order, then pivot will be equal to -1
    if(pivot==(-1))
        {reverse(nums.begin(), nums.end());   // in-place changes are applied, means no new array/space is used
         return ;
        }
    
// STEP 2.) Find the most right most element just greater than pivot ele, THEN swap them      
//   [1 2 3 6 5 4] -> [1 2 4 6 5 3] 
    for(int i=(n-1); i>pivot; i--)
        {if(nums[i]>nums[pivot])
            {swap(nums[i], nums[pivot]);
             break;
            }
        }

// STEP 3.) Reverse elements from (pivot+1) to (n-1) index
//   [1 2 4 |6 5 3] -> [1 2 4 3 5 6] required
    for(int i=(pivot+1), j=n-1; i<j; i++, j--)
        {swap(nums[i], nums[j]);
        }
    }
};