// Q3. Find Second Most Repeated Character
// Given a string, return the character with the second highest frequency.
// Example
// Input:
// "abccaddbdcaasdd"
// Frequency:
// a -> 4
// b -> 2
// c -> 3
// d -> 5
// s -> 1
// Output:
// a 4
//BRUTE 
#include<bits/stdc++.h>
using namespace std;

pair<char,int> f(string &s)
{
    unordered_map<char,int> mp;

    for(auto x:s)
    {
        mp[x]++;
    }

    vector<pair<char,int>> arr;

    for(auto x:mp)
    {
        arr.push_back({x.first,x.second});
    }

    sort(arr.begin(),arr.end(),[](pair<char,int> &a,pair<char,int> &b)
    {
        return a.second>b.second;
    });

    return {arr[1].first,arr[1].second};

}
int main()
{
    string s;
    getline(cin,s);

    pair<char,int> p=f(s);

    cout<<p.first<<" "<<p.second;
}
//OPTIMAL 
#include<bits/stdc++.h>
using namespace std;

pair<char,int> f(string &s)
{
    unordered_map<char,int> mp;

    for(auto x:s)
    {
        mp[x]++;
    }

    char firstChar,secondChar;
    int firstFreq=0,secondFreq=0;

    for(auto x:mp)
    {
        char ch=x.first;
        int freq=x.second;

        if(freq>firstFreq)
        {
            secondFreq=firstFreq;
            secondChar=firstChar;

            firstFreq=freq;
            firstChar=ch;
        }
        else if(freq>secondFreq && freq<firstFreq)
        {
            secondFreq=freq;
            secondChar=ch;
        }
    }

    return {secondChar,secondFreq};
}

int main()
{
    string s;
    getline(cin,s);

    pair<char,int> p=f(s);

    cout<<p.first<<" "<<p.second;
}
