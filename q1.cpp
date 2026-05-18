// Q1. Maximum New People Seating
// You are given an array where:
// 0 = empty seat
// 1 = occupied seat
// A new person can sit only if there are at least 2 empty seats between any two people.
// Return the maximum number of new people that can be seated.
// Example 1
// Input:
// [0,0,0,1,0,0,1,0,0,0]
// Output:
// 2
// Possible arrangement:
// [1,0,0,1,0,0,1,0,0,1]
// Example 2
// Input:
// [0,0,0,0]
// Output:
// 2
// Arrangement:
// [1,0,0,1]
// Example 3
// Input:
// [1,0,0,0,0,1]
// Output:
// 0
// two possible cases that if already array contains 1s then insert them in map or array 
// and check if distance is greater than 2 count++ put that index in map 
// otherwise if no ones put 1 in that position and index also 
// just give hint am i approaching the question correctly??
#include<bits/stdc++.h>
using namespace std;
int f(vector<int> &nums)
{
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=i-2;j<=i+2;j++)
        {
            if(j>=0 && j<n && nums[j]==1)
            {
                flag=false;
                break;
            }
        }
        if(flag && nums[i]==0) 
        {
            nums[i]=1;
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int res;
    res=f(arr);
    cout<<res<<"\n";
}