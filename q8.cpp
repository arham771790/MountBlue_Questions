// Q7. Diagonal Traversal 
// Traverse matrix diagonally.
// Diagonal Traverse is a programming problem on LeetCode that tests knowledge of array manipulation and traversal patterns. It asks the programmer to output all elements of a matrix in diagonal order, alternating between upward and downward directions.
// Key facts
// Platform: LeetCode
// Problem number: 498
// Difficulty: Medium
// Primary concepts: Matrix traversal, simulation, array indexing
// Problem description
// Given an m x n matrix, the goal is to return all elements in a one-dimensional array following a diagonal zigzag pattern. The traversal starts from the top-left cell, moves up-right along one diagonal, then down-left along the next, alternating until all cells are visited.
// Approach and solution patterns
// Common approaches include:
// Simulation with direction control: Use two indices (r, c) and update them based on direction vectors for upward or downward movement, adjusting when boundaries are reached.
// Grouping by diagonals: Collect elements sharing the same index sum r + c, then reverse alternate groups to achieve the required order.
// Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,4,7,5,3,6,8,9]
// Example 2:
// Input: mat = [[1,2],[3,4]]
// Output: [1,2,3,4]
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        map<int,vector<int>> mp;// stores each array element in sorted order
        vector<int>res;
      
        //storing all diagnol elements in one array
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool flip=true;
        for(auto &x:mp)
        {
            if(flip)
            {
                reverse(x.second.begin(),x.second.end());
            }
            for(auto &it:x.second)
            res.push_back(it);
            flip=!flip;
        }

        return res;
    }
}; 
