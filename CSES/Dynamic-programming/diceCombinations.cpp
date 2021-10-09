#include <bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007
using namespace std;

ll solve(int n, vector<ll>& a){
    if(n==1 || n==0){
        return 1;
    }
    if(a[n] != 0){
        return a[n];
    }
    ll ans = 0;
    for(int i=1; i<=6; i++){
        if(n-i < 0){
            break;
        }
        ans+=(solve(n-i, a)%MOD);
    }
    a[n] = ans%MOD;
    return a[n];
}


int main(){
    int n;
    cin >> n;
    vector<ll> a(n+1);
    ll ans = solve(n, a);
    cout << ans << endl;
    return 0;
}
