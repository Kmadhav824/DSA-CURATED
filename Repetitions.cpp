#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int count=1;
    int n=s.size();
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            if(count>1)
            v.push_back(count);
            count=1;
        }
    }
    v.push_back(count);
    if(count==n)
    {
        cout<<n<<endl;
    }
    else
    {
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }
}
