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

cout<<(((double)sqrt(9)))<<" ";
cout<<(((double)sqrt(9)));
out("\n");

  int t;
  in(t);
  while(t--){
  
      int n,x;
      cin>>n>>x;
      int a[n];
      ll sum=0;
      f(i,n) {
          in(a[i]);
          sum+=a[i];

      }
        if(sum==x){
            out("NO");
            continue;
        }
        sort(a,a+n);
        int ans[n];
        ll tempSum=0;
        int f=0;
        for(int i=0;i<n;i++){
            tempSum+=a[i];
            int temp=a[i];
            if(tempSum==x){
                tempSum-=a[i];
                
                if(tempSum+a[n-1]==x){
                    f=1;
                    break;
                }
                tempSum+=a[n-1];
                temp=a[n-1];
                a[n-1]=a[i];

            }
            ans[i]=temp;
        }
        if(f==1){
            out("NO");
            continue;
        }
        out("YES");
        f(i,n){
            cout<<ans[i]<<" ";

        }
        out("\n");


   

  }
   



    
    return 0;
  

}