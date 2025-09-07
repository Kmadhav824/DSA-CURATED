#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
        int temp=n-1;
        while(temp>0)
        {
            cout<<temp<<" ";
            temp-=2;
        }
        temp=n;
        while(temp>0)
        {
            cout<<temp<<" ";
            temp-=2;
        }
    
}

// 7 1 3 5 7  2 4 6
// 3 1 3 2