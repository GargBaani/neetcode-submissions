class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int r=m*n-1;
// 5/2
        while(l<=r){
            int mid=l+(r-l)/2;
            int row=mid/m,c=mid%m;
            if(matrix[row][c]==target)return true;
            else if(matrix[row][c]> target)r=mid-1;
            else l=mid+1;

        }
        return false;
    }
};
