// 4. Matrix Questions
// Q4. Check Upper Triangular Matrix
// A matrix is upper triangular if all elements below the diagonal are 0.
// Example
// Input:
// 1 2 3
// 0 4 5
// 0 0 6
// Output:
// YES
#include<bits/stdc++.h>
using namespace std;

bool f(vector<vector<int>> &mat)
{
    int n=mat.size();
    int m=mat[0].size();
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i-1;j++)
        if(mat[i][j]!=0)
        {
            flag=false;break;
        }
    }
    return flag;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    bool flag=true;
    flag=f(arr);
    if(flag){cout<<"YES\n";return 0;}
    cout<<"NO\n";


}