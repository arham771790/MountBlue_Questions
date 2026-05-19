// Q6. Spiral Matrix Traversal

// Print all elements of matrix in spiral order.

// Related:

// Spiral Matrix
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix[0].size(),n=matrix.size();
        vector<int> v;
        int minr=0,maxr=matrix.size()-1,minc=0,maxc=matrix[0].size()-1;
        int ele=0;
        while(minr<=maxr && minc<=maxc && ele<=m*n)
        {
            //right
            for(int j=minc;j<=maxc && ele<m*n;j++)
            {
                v.push_back(matrix[minr][j]);
                ele++;
            }
            minr++;
            //down
            for(int j=minr;j<=maxr && ele<m*n;j++)
            {
                v.push_back(matrix[j][maxc]);
                ele++;
            }
            maxc--;
            //left
            for(int j=maxc;j>=minc && ele<m*n;j--)
            {
                v.push_back(matrix[maxr][j]);
                ele++;
            }
            maxr--;
            //up
            for(int j=maxr;j>=minr && ele<m*n;j--)
            {
                v.push_back(matrix[j][minc]);
                ele++;
            }
            minc++;
        }
        return v;
    }
};