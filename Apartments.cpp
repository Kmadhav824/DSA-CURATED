#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int i,a,b,c,count=0;
    cin>>a>>b>>c;
    vector<int>v1(a);
    vector<int>v2(b);
    for(i=0;i<a;i++)
    {
        cin>>v1[i];
    }
    for(i=0;i<b;i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int ptr1=0,ptr2=0;
    while(ptr1<v1.size() && ptr2<v2.size())
    {
        if(abs(v1[ptr1]-v2[ptr2])<=c)
        {
            ptr1++;
            ptr2++;
            count++;
        }
        else
        {
            if(v1[ptr1]>v2[ptr2])
            {
                ptr2++;
            }
            else
            {
                ptr1++;
            }
        }
        
    }
    cout<<count<<endl;
}