#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, l, r;
    cin >> n;
    ll x, target = 0;
    cin >> x;
    vector<ll> a(n);
    for(auto &i : a){
        cin >> i;
    }
    auto b = a;
    map<ll, ll> m;
    for(int i=0; i<n; i++){
        m[a[i]] = i;
    }
    sort(a.begin(), a.end());
    // for(auto &i : a){
    //     cout << i << " ";
    // }
    // cout << endl;
    l = 0;
    r = n-1;
    bool ok = false;
    while(l<r){
        target = a[l] + a[r];
        if(target > x){
            r--;
        }else if(target < x){
            l++;
        }else{
            ok = true;
            break;
        }
    }
    if(ok){
        if(m[a[l]] == m[a[r]]){
            for(int i=0; i<n; i++){
                if(b[i] == a[r] && i != m[a[r]]){
                    // m[a[r]] = i;
                    cout << m[a[l]]+1 << " " << i+1 << endl;
                }
            }
        }else{
        cout << m[a[l]] + 1 << " " << m[a[r]] + 1<< endl;
        }
    }else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}