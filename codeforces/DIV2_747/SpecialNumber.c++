#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
long long get(int x,int cnt)
{
    int res=1;
    for(int i=1;i<=cnt;i++)
        res=(res%mod*x%mod)%mod;
    return res;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        int cnt=0;
        int res=0;
        cin>>x>>k;
        while(k)
        {
            if(k%2)
            {
                res=(res%mod+(long long)get(x,cnt)%mod)%mod;
            }
            k/=2;
            cnt++;
        }
        cout<<res<<endl;
    }
    return 0;
}