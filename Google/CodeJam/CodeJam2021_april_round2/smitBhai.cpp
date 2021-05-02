#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

string to_str(ll val){
    string s="";
    while(val>0){
        s+='0'+val%10;
        val/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

string to_val(string s){
    return s;    
}

pair<string,ll> find(string a,string b){
    if(a.size()<b.size() || (a.size()==b.size() && a<b))
        return make_pair(b,0);
    else if(a==b){
        return make_pair(b+'0',1);   
    }else{
        ll i;
        ll cnt=0;
        string s1 = a;
        string s2 = b;
        for(i=0;i<s2.size();i++)
            if(s1[i]>s2[i]){
                while(s2.size()<=s1.size()){
                    s2+='0';
                    cnt++;
                }
                return make_pair(to_val(s2),cnt);
            }else if(s1[i]<s2[i]){
                while(s2.size()<s1.size()){
                    s2+='0';
                    cnt++;
                }
                return make_pair(to_val(s2),cnt);
            }
        
        for(i=(ll)s1.size()-1;i>=s2.size();i--)
            if(s1[i]!='9'){
                while(s2.size()<i){
                    s2+=s1[s2.size()];
                    cnt++;
                }
                s2+=s1[i]+1;
                cnt++;
                while(s2.size()<s1.size()){
                    s2+='0';
                    cnt++;
                }
                return make_pair(to_val(s2),cnt);
            }
        
        while(s2.size()<=s1.size()){
            s2+='0';
            cnt++;
        }
        
        return make_pair(to_val(s2),cnt);
    }
}

int main(){
    FIO;
    ll t,n,k,i,j;
    cin >> t;
    for(ll cases=1;cases<=t;cases++){
        cout << "Case #" << cases << ": ";
        cin >> n ;
        ll a[n];
        string s;
        
        for(i=0;i<n;i++)
            cin >> a[i];
        
        j=0;
        s=to_str(a[0]);
        for(i=1;i<n;i++){
            auto it=find(s,to_str(a[i]));
            s=it.first;
            j+=it.second;
        }
        cout << j << "\n";
    }
	return 0;
}
