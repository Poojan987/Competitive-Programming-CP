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

int main(){
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    string s;
    cin>>s;
    auto it=find(all(s),'1');
    s.erase(s.begin(),it);
    if(s.length()==0){
        cout<<"0"<<endl;
    }
    else{
        map<string,ll>m;
        vector<ll>v;
        fl(i,0,s.length())
            if(s[i]=='0')
                v.pb(i);
        if(v.size()==0)
            cout<<s<<endl;
        else{
            ll index;
            fl(i,0,v.size()){
                fl(j,0,v[i]+1){
                    if(s[j]=='0')
                        continue;
                    string g=s.substr(j,s.length()-v[i]);
                    m[g]++;
                }
                index=i;
                if(m.size()>0)
                    break;
            }
            if(m.size()==0){
                cout<<s<<endl;
            }
            else{
                string fine;
                bool result2=false;
                fl(i,index+1,v.size()){
                    string ans="";
                    for(auto &it1:m){
                        if(m[it1.first]==0)
                            continue;
                        string y=it1.first;
                        ll diff=v[i]-v[index];
                        if(ans.length()==0&&m[it1.first]!=0)
                            ans=it1.first;
                        if(y[diff]=='0')
                            m[y]--;
                    }
                    bool result=false;
                    for(auto &it1:m){
                        if(m[it1.first]!=0){
                            result=true;
                            break;
                        }
                    }
                    if(!result){
                        fine=ans;
                        result2=true;
                        break;
                    }
                }
                if(!result2){
                    for(auto &it1:m){
                        if(m[it1.first]!=0){
                            fine=it1.first;
                            break;
                        }
                    }
                }
                // cout<<fine<<endl;
                // cout<<s.length()<<" "<<fine.length()<<endl;
                reverse(all(fine));
                ll w=s.length()-fine.length();
                fl(k,0,w)
                    fine+="0";
                reverse(all(fine));
                // cout<<fine<<endl;
                fl(i,0,s.length()){
                    if(s[i]=='1'||fine[i]=='1')
                        cout<<"1";
                    else
                    cout<<"0";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}