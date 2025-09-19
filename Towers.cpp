#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int count;
    if(v[0]>=v[1])
    {
        count=1;
    }
    else
    {
        count=0;
    }
    int max=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>=max)
        {
            count++;
        }
        max=v[i];
    }
    cout<<count<<endl;
}
