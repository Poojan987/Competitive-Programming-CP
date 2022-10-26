#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 
    int t=1;
    std::cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if (a+b==c||a+c==b||b+c==a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}