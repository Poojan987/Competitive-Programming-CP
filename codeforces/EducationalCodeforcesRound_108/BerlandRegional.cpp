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


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);



  int t;
  in(t);
  while(t--){
    int n;
    in(n);
    unordered_map<int,int>um;
    unordered_map<int,vector<ll> >umVal;
    unordered_map<int,vector<ll> >umValFreq;
int a[n];
    f(i,n){
        int tp;
        in(tp);
        um[tp]++;
        a[i]=tp;
    }
    
    ll sum=0;
    f(i,n){
        ll tp;
        in(tp);
        umVal[a[i]].push_back(tp);
        sum+=tp;


    }
    // vector<vector<ll>>arr2;
    // f(i,n+1){
    //     f(j,n+1) arr2[i][j]=0;
    // }
    for(auto &itr:umVal){
        sort(itr.second.rbegin(),itr.second.rend());
        ll tp=0;
        int i=0;
        // vector<ll>vt;
        for(auto &itr2:itr.second){
            tp+=itr2;
            // arr2[itr.first][i++]=tp;
            // vt.push_back(tp);
            umValFreq[itr.first].push_back(tp);
        }
        
    }

    for(int i=1;i<=n;i++){
        ll ans=0;
        if(i==1) {
            out(sum);
            continue;
        }
         for(auto&itr2:umVal){
                int z=itr2.second.size()/i;
             z=z*i;
            //  cout<<z<<" adsjfk:"<<umValFreq[itr2.first].size();
            //  out("\n");
            if(z>=umValFreq[itr2.first].size())  continue;
             ans+=umValFreq[itr2.first][z-1];
              
            }

        cout<<(ans)<< " ";
    }
    out("\n");


   

  }
   



    
    return 0;
  

}