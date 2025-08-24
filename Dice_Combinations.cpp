#include<bits/stdc++.h>
using namespace std;

vector <int> v(1e6+1,-1);
int mod=1000000007;
int dp_recursion(int t)
{
    int mycount=0;
    if(t==0)
    {
        return 1;
    }
    else if(t<0)
    {
        return 0;
    }
    if(v[t]!=-1)
    {
        return v[t];
    }
    for(int i=1;i<=6;i++)
    {
    mycount+=dp_recursion(t-i);
    mycount%=mod;
    v[t]=mycount;
    }
    return mycount;
}
int main()
{
    int t;cin>>t;
    cout<<dp_recursion(t)%mod;
}
