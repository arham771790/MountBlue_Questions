// Q2. Sort Words According to Embedded Digits
// Each word contains one digit. Rearrange words according to the digit.
// Example
// Input:
// "God5 t2he 1For lov3e o4f"
// Output:
// "For the love of God"
// Example 2
// Input:
// "is2 This1 a3 test4"
// Output:
// "This is a test"
#include<bits/stdc++.h>
using namespace std;
string f(string &s)
{
    string res="";
    map<int,string> mp;
          string word="";
        int dig=0;
    for(int i=0;i<s.size();i++)
    {
  
        if(isalpha(s[i]))
        word+=s[i];
        else if(isdigit(s[i]))
        dig=s[i]-'0';
        if(s[i]==' ')
        {
            mp[dig]=word;word="";dig=0;
        }
    }
    mp[dig]=word;
    for(auto x:mp)
    {
        res+=x.second+" ";
    }
    res.pop_back();
    return res;
}
int main()
{
    string s;
    getline(cin,s);
    string res="";
    res=f(s);
    cout<<s<<"\n";

}