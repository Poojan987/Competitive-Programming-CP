#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i: a){
        cin >> i;
    }
    map<int,int> s;
    int maxx = 0, start = 0;
    for(int i=0; i<n; i++){
        if(s.find(a[i]) != s.end()){
            start = max(start, s[a[i]] + 1);
        }
        s[a[i]] = i;
        maxx = max(maxx, i-start + 1);   
    }
    cout << maxx << endl;
    return 0;
}

