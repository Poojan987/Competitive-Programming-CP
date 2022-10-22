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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a[n];
    fl(i,0,n)
        cin>>a[i];
    ll pf[n];
    pf[0]=a[0];
    fl(i,1,n)
        pf[i]=pf[i-1]+a[i];
    auto it=find(all(s),'0');
    if(it==s.end()){
        cout<<pf[n-1]<<endl;
        return;
    }
    ll ans=0,index=-1;
    if(it==s.begin())
        index=0;
    if(it!=s.begin())
        index=it-s.begin(),ans+=pf[index-1];
    ll mi=a[index];
    ll check=index;
    fl(i,index+1,n){
        if(s[i]=='1')
            mi=min(mi,a[i]);
        else{
            if(check==0){
                ans+=(pf[i-1]-mi);
                mi=a[i],check=i;
            }
            else{
                ans+=(pf[i-1]-pf[check-1]-mi);
                mi=a[i],check=i;
            }
        }
    }
    if(check!=n-1&&check!=0){
        ans+=(pf[n-1]-pf[check-1]-mi);
    }
    else if(check!=n-1){
        ans+=(pf[n-1]-mi);
    }
    cout<<ans<<endl;
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