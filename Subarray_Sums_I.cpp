#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    while(t--)
    {
        int n,x;cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ptr1=0,ptr2=0;
        int sum=0,count=0;
        while(ptr2<n)
        {
            if(sum+v[ptr2]<=x)
            {
                sum+=v[ptr2];
                ptr2++;
            }
            else
            {
                sum-=v[ptr1];
                ptr1++;
            }
            if(sum==x)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
