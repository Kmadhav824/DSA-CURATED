#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int move=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ptr=1;
    while(ptr<n)
    {
        if(v[ptr]<v[ptr-1])
        {
            move+=v[ptr-1]-v[ptr];
            v[ptr]=v[ptr-1];
        }
        ptr++;
    }
    cout<<move<<endl;
}
