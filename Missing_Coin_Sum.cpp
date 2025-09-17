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
    sort(v.begin(),v.end());
    int l=0;
    // 1 2 2 7 9    6
    long long sum=0;
    if(v[0]>1)
    {
        cout<<1<<endl;
        return 0;
    }
    while(l<n-1)
    {
        if(sum+v[l]+1<v[l+1])
        {
            cout<<sum+v[l]+1<<endl;
            return 0;
        }
        else
        {
            sum+=v[l];
        }
        l++;
    }
    cout<<sum+v[l]+1<<endl;
}
