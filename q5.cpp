// Q5. Check Lower Triangular Matrix
// A matrix is lower triangular if all elements above the diagonal are 0.
// Example
// Input:
// 1 0 0
// 2 3 0
// 4 5 6
// Output:
// YES
#include<bits/stdc++.h>
using namespace std;

bool f(vector<vector<int>> &mat)
{
    int n=mat.size();
    int m=mat[0].size();
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
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