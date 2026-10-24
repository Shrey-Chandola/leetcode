class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();  // used 0 as is a square matrix, thus same row & col.
        int strtRow = 0, endRow = m - 1;
        while(strtRow <= endRow){  // TC = O(log(m))
            int midRow = strtRow + (endRow-strtRow)/2;
            if( (target >= matrix[midRow][0]) && (target <= matrix[midRow][n-1]) ){
                int start = 0, end = n-1;

                while(start <= end)  // TC = O(log(n))
                {   int mid = start + (end-start)/2;
                    if(matrix[midRow][mid]==target) { return true; }
                    else if(target > matrix[midRow][mid]){
                        start = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
                return false;
            }
            else if(target > matrix[midRow][n-1]){
                strtRow = midRow + 1;
            }
            else{
                endRow = midRow - 1;
            }
        }
        return false;        
    }
};