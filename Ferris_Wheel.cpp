#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,count=0;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0,r=v.size()-1;
    while(l<r)
    {
        if(v[l]+v[r]<=x)
        {
            count++;
            l++;
            r--;
        }
        else
        {
            count++;
            r--;
        }
    }
    if (l==r)
    {
        count++;
    }
    cout<<count<<endl;
}