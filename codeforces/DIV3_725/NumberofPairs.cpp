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
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
  
      int n;
      in(n);
      int l,r;
      cin>>l>>r;
      vector<int>v;
      
      
      f(i,n){
          int tp;
          in(tp);
          
          v.push_back(tp);
          
      }
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        int tp1=l-v[i],tp2=r-v[i];
        if(tp1<0)tp1=0;
        if(tp2<0) continue;
        auto lb=lower_bound(v.begin()+i+1,v.end(),tp1);
        auto ub=upper_bound(v.begin()+i+1,v.end(),tp2);
        
        ans+=ub-lb;
    }
    // out("hello");
     out(ans);
    //  multiset<int>s;
    //  int ans=0;
    // for(int i=0;i<n;i++){
    //     int tp1=l-v[i]>=0?l-v[i]:0;
    //     int tp2=r-v[i]>=0?r-v[i]:-1;
    //     if(tp2==-1) {
    //         s.insert(v[i]);
    //         continue;
    //     }
    //     if(s.size()!=0) {
    //         auto lb = s.lower_bound(tp1);
    //         auto ub = s.upper_bound(tp2);
            
    //         auto itr1=s.find(*lb);
    //         auto itr2=s.find(*ub);
    //         int total=distance(s.begin(),itr1)
    //         if(lb==s.end()){
    //             s.insert(v[i]);
    //             continue;
    //         }
    //         cout<<"hey"<<*lb<<" "<<*ub<<"\n";
    //         ans+=(*ub-*lb)>0?*ub-*lb:0;
    //     }
    //     s.insert(v[i])   ;
    // }
    // cout<<"hello";
    // out(ans);

    } 

    
    return 0;
  

}