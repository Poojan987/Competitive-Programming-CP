#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long
#define fl(x,y,n) for(ll x=y;x<n;x++)
#define rfl(x,y,n) for(ll x=y;x>=n;x--)
#define yesno  if(result) cout<<"YES"<<endl;else cout<<"NO"<<endl;
#define pb push_back
#define all(v) v.begin(),v.end()
#define rev(v) v.rbegin(),v.rend()

void sol(){
    ll z;
    cin>>z;
    map<ll,ll>m;
    fl(i,0,z){
        ll a;
        cin>>a;
        m[a]++;
    }
    ll n=m.size();
    cout<<(10-n)*(10-n-1)*3<<endl;
}

int main(){
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}