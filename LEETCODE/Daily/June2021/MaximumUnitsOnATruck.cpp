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
bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] > v2[1];
}


int maximumUnits(vector<vector<int> >& boxTypes, int truckSize) {
    sort(boxTypes.begin(),boxTypes.end(),sortcol);
    int n=boxTypes.size();
    int done=0;
    int ind=0;
    int totUnits=0;
    while(ind!=n && done!=truckSize){
        if(boxTypes[ind][0]<=truckSize-done){
            totUnits+=boxTypes[ind][0]*boxTypes[ind][1];
            done+=boxTypes[ind][0];
        }
        else{
            totUnits+=(truckSize-done)*boxTypes[ind][1];
            done+=boxTypes[ind][0];
            break;
        }
        // cout<<totUnits<<" ";
        ind++;
    }
    return totUnits;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t=1;
//    in(t)
   while(t--){
       int n; in(n)
       vector<vector<int> >tp(n);
       for(int i=0;i<n;i++){
           int tp1,tp2;
           cin>>tp1>>tp2;
           vector<int> z;
           z.push_back(tp1);z.push_back(tp2);
           tp[i]=z;
       }

       maximumUnits(tp,5);

   }
    
    return 0;
  

}