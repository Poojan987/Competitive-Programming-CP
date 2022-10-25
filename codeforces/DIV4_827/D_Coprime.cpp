#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define forl(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{ 
    IOS
    int t=1;
    std::cin>>t;
    vector<pair<ll,ll>>v;
    v.pb({1,1});
    for(int i=1;i<=1000;i++)
        for(int j=i+1;j<=1000;j++)
            if (gcd(i,j)==1)
                v.pb({i,j});
    while (t--)
    {
        int n;
        std::cin>>n;
        vll a(n);
        map<ll,ll> m;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=max(m[a[i]],1ll*(i+1));
        }
        ll z=-1;
        for (int i=0;i<sz(v);i++)
        {
            if (!m[v[i].ff]||!m[v[i].ss])
            continue;
            else
            z=max(z,m[v[i].ff]+m[v[i].ss]);
        }
        cout<<z<<endl;
    }
    return 0;
}