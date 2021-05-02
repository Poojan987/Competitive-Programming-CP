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


// unordered_set<ll>s;
// ll sum1=0,sum2=0;
// int i=1;
// while(i<100000000){
//     sum1+=2*i;
//     sum2+=4*i;
//     s.insert(sum1);
//     s.insert(sum2);
//     i+=2;
//     // out(i);
// }
  int t;
  in(t);
  while(t--){
  
      ll n;
      in(n);
    if(n%2!=0){
        out("NO");
        continue;
    }
    
    int n1=n/2,n2=n/4;

    int p1=(int)sqrt(n1);
    int p2=(int)sqrt(n2);
    // cout<<p1<<" "<<p2<<"\n";
    // cout<<n1<<" "<<n2<<"\n";
    if(p1*p1==n1 && n%2==0){
        out("YES");
    }
    else if(n%4==0 && p2*p2==n2){
out("YES");
    }
    else{
        out("NO");
    }
    


   

  }
   



    
    return 0;
  

}