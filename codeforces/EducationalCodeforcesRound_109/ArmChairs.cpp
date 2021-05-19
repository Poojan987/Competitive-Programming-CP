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


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

int n;
in(n);
int a[n];
vector<int > v;
f(i,n) {
    in(a[i]);
    if(a[i]==1){
        v.push_back(i);
    }

}

if(v.size()==0) out(0)
else if(v.size()==1) out(1)
else{
    int strt=0,end=v.size()-1;
    ll sum=0;
    // while(strt<=end){
    v[strt]=-1;
    int oc1=0,oc2=0;
    for(int i=v[strt]-1;i>=0;i--){
        if(a[i]==0){
            a[i]=1;
            sum+=abs(i-v[strt]);
            oc1=1;
            break;
        }
    }
    if(!oc1) {
        for(int i=v[strt]+1;i<n;i++){
            if(a[i]==0){
                a[i]=1;
                sum+=abs(i-v[strt]);
                oc1=1;
                break;
            }
        }
    }
    v[end]=-1;
    for(int i=v[end]+1;i<n;i++){
            if(a[i]==0){
                a[i]=1;
                sum+=abs(i-v[end]);
                oc2=1;
                break;
            }
        }
    
    if(!oc2) {
            for(int i=v[end]-1;i>=0;i--){
            if(a[i]==0){
                a[i]=1;
                // a[]
                sum+=abs(i-v[end]);
                oc2=1;
                break;
            }
    }
    }
    strt++;end--;
    // }

    int ind1S=INT_MAX,ind2S=INT_MAX;
    int index1S=-1,index2S=-1;
    for(int i=v[strt]-1;i>=0;i--){
        if(a[i]==0){
            // a[i]=1;
            index1S=i;
            ind1S=abs(i-v[strt]);
            break;
        }
    }
    for(int i=v[strt]+1;i<n;i++){
        if(a[i]==0){
            // a[i]=1;
            index2S=i;
            ind2S=abs(i-v[strt]);;
            break;
        }
    }
    if(ind1S>ind2S){
        a[index2S]=1;
        sum+=ind2S;
    }
    else{
        a[index1S]=1;
        sum+=ind1S;
    }
    strt++;

}




    
    return 0;
  

}