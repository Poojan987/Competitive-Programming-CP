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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
bool sortByVal(const pair<int, double> &a, 
               const pair<int, double> &b) 
{ 
    return (a.second < b.second); 
} 


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
  
      int n,l,r;
      cin>>n>>l>>r;
      int colour[n];
      map<int,int> Colour_leftSocks_freq;
      map<int,int> Colour_rightSocks_freq;
      int ltp=l,rtp=r;
      ll ans=0;
      f(i,n){
          in(colour[i]);
          if(ltp>0) Colour_leftSocks_freq[colour[i]]++;
          else{
              Colour_rightSocks_freq[colour[i]]++;
          }
          ltp--;
          

      }

   if(l<r){
       vector<pair<int, int> > mapcopy(Colour_leftSocks_freq.begin(), Colour_leftSocks_freq.end());
        sort(mapcopy.begin(), mapcopy.end(), sortbysec);
        Colour_leftSocks_freq.clear();
        for(int i=mapcopy.size();i>=0;i++){
            Colour_leftSocks_freq[mapcopy[i].first]=mapcopy[i].second;
        }

        vector<pair<int, int> > mapcopy2(Colour_rightSocks_freq.begin(), Colour_rightSocks_freq.end());
        sort(mapcopy2.begin(), mapcopy2.end(), sortbysec);
        Colour_rightSocks_freq.clear();
        for(int i=mapcopy2.size();i>=0;i++){
            Colour_rightSocks_freq[mapcopy2[i].first]=mapcopy2[i].second;

        }
        
        vector<int>coloreven;
        vector<int>colorother;
        for(auto&itr:Colour_rightSocks_freq){
            int diff=itr.second-Colour_leftSocks_freq[itr.first];
            if(diff%2==0 && diff!=0){
                coloreven.push_back(itr.first);
                continue;
            }
            if(diff<=0){ continue;

            }
            colorother.push_back(itr.first);
        }
        for(int i=0;i<coloreven.size();i++){
            int val=Colour_rightSocks_freq[coloreven[i]];
            val/=2;
            ans+=val;
            Colour_leftSocks_freq[coloreven[i]]+=val;
            Colour_rightSocks_freq[coloreven[i]]-=val;
            colorother.push_back(coloreven[i]);
        }
        for(int i=0;i<colorother.size();i++){
            int val=Colour_rightSocks_freq[colorother[i]];
            if(val==1) break;
            val/=2;
            ans+=val;
            Colour_leftSocks_freq[colorother[i]]+=val;
            Colour_rightSocks_freq[colorother[i]]-=val;
        }


   }
   else{

   }

  }
   



    
    return 0;
  

}