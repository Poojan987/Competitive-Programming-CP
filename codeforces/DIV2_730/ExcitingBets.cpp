#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";
long long int cnt=0;
int mod=1000000007;

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    int t;
    in(t);
    while(t--){
        ll a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<" "<<0<<"\n";
            continue;
        }
        else{
            ll tp=abs(a-b);
            ll excitement=abs(a-b),moves=0;
            ll mini=min(a,b);
            ll maxi=max(a,b);
            ll z1=abs(((mini/excitement)+1)*excitement-mini);
            ll z2=abs(((mini/excitement))*excitement-mini);

            moves=min(z1,z2);
            cout<<excitement<<" "<<moves<<"\n";

        }
    }
      
      



}