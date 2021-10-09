#include <bits/stdc++.h>
using namespace std;
 
void find(long long int n){
    long long int ans{1};
    while(n--){
        ans = (ans*2)%1000000007;
    }
    cout << ans%1000000007 << endl;
    // long long int ans = (n%1000000007)*(n%1000000007);
    // cout << ans%1000000007 << endl; 
}

int main(){
    long long int n;
    cin >> n;
    find(n);
}