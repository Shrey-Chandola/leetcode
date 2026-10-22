class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int maxr = m-1, minr = 0, maxc = n-1, minc = 0;              //      |   |--------->   |  |                         
        int count = 0, tne = n*m;                                    //      |   <-------------|  |                         
        while(count<tne)                                             //      <--------------------|           
            {for(int j=minc; j<=maxc && count<tne; j++)                                                                    
                {ans.push_back(matrix[minr][j]);                                                                         
                 count++;                                                                                           
                }                                                                                                             
             minr++;                                                                                                 
             for(int i=minr; i<=maxr && count<tne; i++)         // Count Condition used here just to decrease code size                                                         
                {ans.push_back(matrix[i][maxc]);                                                                                     
                 count++;                                                                                                   
                }                                                                                                     
             maxc--;                                                                                                               
             for(int j=maxc; j>=minc && count<tne; j--)                                                                          
                {ans.push_back(matrix[maxr][j]);                                                                                   
                 count++;                                                                                                  
                }                                                                                         
             maxr--;
             for(int i=maxr; i>=minr && count<tne; i--)
                {ans.push_back(matrix[i][minc]);
                 count++;
                }
             minc++;
            }
        return ans;        
    }
};