#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    multiset<int> v1;
    vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v1.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<m;i++)
    {
        auto it=v1.upper_bound(v2[i]);
        if(it==v1.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            it--;
            cout<<*it<<endl;
            v1.erase(it);
        }
    }
}
