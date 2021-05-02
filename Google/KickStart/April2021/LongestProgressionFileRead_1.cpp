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
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

int main()
{
    ifstream fin("ts1_input.txt");
    ofstream fout("output.txt");

    //-- check if the files were opened successfully 
    if (!fin.is_open()) cout << "input.in was not open successfully" << endl;
    if (!fout.is_open()) cout << "output.out was not open successfully" << endl;

    int t=1;
      fin>>(t);

    // int numCase;
    // fin >> numCase;
    int i, j, n;
    long long c;
    
 for(int abcd=0;abcd<t;abcd++){
    


        int n;
        fin>>(n);
        ll a[n];
        f(i,n)fin>>(a[i]);
        int maxi=1;
if(n==2) {
    fout<<"Case #"<<abcd+1<<": "<<2<<"\n";
    continue;
}
ll temp=a[0]-a[1];
int z=0;
        for(int j=0;j<n;j++){
                // hey+=a[j];
                // cout<<a[j]<<" ";
                if(a[j]-a[j+1]==temp){
                    z++;
                }
                else{
                    temp=a[j]-a[j+1];
                    z=2;
                }
                maxi=max(maxi,z);
            }

        
        for(int i=0;i<n;i++){
            ll tp[n];
            f(j,n)tp[j]=a[j];
            if(i>0 && i<n-1)
                tp[i]=(a[i-1]+a[i+1])%2==0?((a[i-1]+a[i+1])/2):tp[i];
            else {
                if(i==0) {
                    tp[i]=tp[1]+(tp[1]-tp[2]);
                    
                    }
                else{
                    tp[i]=tp[n-2]-(tp[n-3]-tp[n-2]);
                }
            }
            int z=1;
            ll temp=tp[0]-tp[1];
            string hey="";
            for(int j=0;j<n-1;j++){
                
                // cout<<tp[j]<<" ";
                // if(j==n-2) cout<<tp[j+1]<<" ";
                if(tp[j]-tp[j+1]==temp){
                    z++;
                }
                else{
                    temp=tp[j]-tp[j+1];
                    z=2;
                }
                maxi=max(maxi,z);
            }
            // out("\n");



        }



          


fout<<"Case #"<<abcd+1<<": "<<maxi<<"\n";

   }


    fin.close();
    fout.close();
    return 0;
}