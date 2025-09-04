#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    // sort(v2.begin(),v2.end());
    int ptr1=0,ptr2=0;
    while(ptr1<n && ptr2<m)
    {
        if(v2[ptr2]<v1[ptr1])
        {
            ptr
        }
    }
}
