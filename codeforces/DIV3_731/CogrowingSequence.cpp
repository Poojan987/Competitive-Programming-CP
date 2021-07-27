#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
#include <ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd, n) for (ll abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";



ll decToBinary(ll n,vector<ll>&v)
{
    // array to store binary number
    ll binaryNum[35];
 
    // counter for binary array
    ll i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    ll c=0;
    for (ll j = i - 1; j >= 0; j--){
        c++;
        v.push_back(binaryNum[j]);

    }
    return c;
        
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    in(t);
    while (t--)
    {
       ll n;
       in(n);
       ll a[n];
       f(i,n)in(a[i]);
ll tp=0;
       for(ll i=0;i<n;i++){
           if(i==0){
               cout<<0<<" ";
               tp=a[i];
           }
           else{
                tp=a[i-1];
               if((tp&a[i])==tp){
                   cout<<0<<" ";
                   continue;
               }
            ll hello=a[i];
            vector<ll>zV1,zV2;
            ll z=decToBinary(tp,zV1);
            ll z2=decToBinary(a[i],zV2);
            vector<ll>ans;

           
            ll hey2=(1<<z2)-1;

            ll hey=(1<<z)-1;
            // a[i]&=hey;
            ll p=min(a[i]^hey,hello^tp);
            if((a[i]^hey)<(hello^tp)){
                p=hey;
            }
            else{
                p=tp;
            }
            // cout<<"hello: "<<(a[i]^hey)<<" "<<(hello^tp)<<" ";

            // cout<<"\n"<<a[i]<<" "<<hey<<"\n";
            cout<<p<<" ";
            // cout<<(a[i]^hey)<<" ";
            
            // a[i]=hello;
            a[i]=hello^p;
           }
       }
       cout<<"\n";
    }
}
