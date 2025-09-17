#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;cin>>t;
    vector<long long int> v;
    v.push_back(t);
    while(t!=1)
    {
        if(t%2==0)
        {
            t/=2;
            v.push_back(t);
        }
        else
        {
            t*=3;
            t+=1;
            v.push_back(t);
        }
    }
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
