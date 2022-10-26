#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{ 
    IOS
    int t=1;
    std::cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        vll a(n),sum(n+1),m(n);
        sum[0]=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (!i) sum[i+1]=a[i],m[i]=a[i];
            if (i) sum[i+1]=sum[i]+a[i],m[i]=max(m[i-1],a[i]);
        }
        while(q--)
        {
            ll k;
            cin>>k;
            cout<<sum[upper_bound(all(m),k)-m.begin()]<<" ";
        }
        cout<<endl;
    }
    return 0;
}