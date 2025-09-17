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
    int l=0;
    long long sum=0;
    long long maxSum=v[0];
    while(l<n)
    {
        sum+=v[l];
        if(sum>maxSum)
        {
            // -1 3 -2 5 3 -5 2 2     -3 -2
            maxSum=max(sum,maxSum);
        }
        if(sum<0)
        {
            sum=0;
        }
        l++;
    }
    cout<<maxSum<<endl;
}
