#include <bits/stdc++.h>
using namespace std;

long long power( long long b, long long e);
long long calc(long long n);

int main(){
    long long n;
    cin >> n;
    long long i=1;
    for(;i<=n;i++){
        long long ans = calc(i);
        cout << ans << endl;
    }
    return 0;
}

long long power( long long b, long long e){
    if(e==0) return 1;
    if(e&1) return b*power(b*b,e/2);
    return power(b*b,e/2);
}

long long calc(long long n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 6;
    }
    if(n == 3){
        return 28;
    }
    if(n==4){
        return 96;
    }
    long long ans{0};
    long long p = power(n,2);
    ans = 4*(p-3) + 8*(p-4) + (n-4)*4*(p-5) + 4*(p-5) + (n-4)*4*(p-7) + (n-4)*(n-4)*(p-9);
    ans/=2;
    return ans;
}