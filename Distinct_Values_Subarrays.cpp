#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int mul=1;
    vector<int> v(n);
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        ump[v[i]]++;
    }
    for(auto ele:ump)
    {
        mul*=ele.second;
    }
    cout<<pow(2,n)/mul;
}
