#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sdefine string s; cin>>s;
#define idefine(n) ll n;cin>>n;
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define set_bits(a) __builtin_popcountll(a)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define cin(v) {int x; cin>>x; v.push_back(x);}
#define forl(i,a,b) for(int i=a;i<b;i++)
#define yesno(x,y) if (x==y) cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define endl "\n"
#define display(a,x,y) { for (int i=x;i<y;i++) cout<<a[i]<<" "; cout<<endl; }
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{ 
    IOS
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    int t=1;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        vll a(n),c(n);
        ll z=0,k=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            z=z|a[i];
        }
        swap(a[0],a[max_element(all(a))-a.begin()]);
        k=a[0];
        for (int i=1;i<n;i++)
        {
            if (k==z)
                break;
            ll max=i;
            for (int j=i+1;j<n;j++)
            {
                if ((a[j]|k)>(a[max]|k))
                    max=j;
            }
            swap(a[i],a[max]);
            k=k|a[i];
        }
        display(a,0,n);
    }
    return 0;
}