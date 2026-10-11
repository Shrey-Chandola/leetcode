class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size(), repeatedNo = INT8_MAX, missingNo = INT8_MIN; 
        int actualSum = 0, expectedSum = 0 ;
        for(int i=0; i<n; i++)
            {for(int j=0; j<n; j++)
                {actualSum += grid[i][j];
                 if(s.find(grid[i][j]) != s.end())   // Used if-else cond.ns to find repeating no.
                    {repeatedNo = grid[i][j];
                     ans.push_back(repeatedNo);
                    }
                 else
                    {s.insert(grid[i][j]);   // Inserting in set, to check grid[i][j] next time again, if is the repeating value
                    }
                }
            }
        expectedSum = (n*n) * ((n*n) + 1)/2;
        missingNo = expectedSum + repeatedNo - actualSum;
        ans.push_back(missingNo);
        return ans;        
    }
};