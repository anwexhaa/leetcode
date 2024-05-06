class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N= matrix.size(), M=matrix[0].size();
        int start=0,end=N*M-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int row_index=mid/M;
            int column_index=mid%M;
            if(matrix[row_index][column_index]==target)
            return 1;
            else if(matrix[row_index][column_index]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
    }
};