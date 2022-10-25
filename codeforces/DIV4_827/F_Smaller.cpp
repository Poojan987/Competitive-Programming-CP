#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define yesno(x,y) if (x==y) cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{ 
    IOS
    int n=1;
    std::cin>>n;
    while (n--)
    {
        ll q,f1=1,f2=1;
        cin>>q; 
        map<char,ll> s,t;
        s['a']=t['a']=1;
        char e='a';
        while(q--)
        {
            ll x,k;
            string l;
            cin>>x>>k>>l;
            if (x==1)
            {
                for (char c:l)
                    s[c]+=k;
                f1+=k*sz(l);
            }
            else
            {
                for (char c:l)
                    t[c]+=k;
                f2+=k*sz(l);
            }
            bool check=false;
            ll j1=0,j2=0;
            for (char b='a';b<='z';b++)
            {
                j1+=s[b];
                j2+=t[b];
                if (j2==f2&&j1!=f1)
                    break;
                if ((s[b]>0&&f2!=j2)||(s[b]>0&&f2==j2&&j1==f1&&j1<j2))
                {
                    check=true;
                    break;
                }
            }
            yesno(check,true);
        }
    }
    return 0;
}