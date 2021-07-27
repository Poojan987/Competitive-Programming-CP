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

#define f(abcd, n) for (int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";




int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    in(t);
    while (t--)
    {
        string s;
        in(s)

        unordered_set<char>seti;
        int n=s.size();
        int f=0;
        int indA=0;
        for(int i=0;i<n;i++){
            if(seti.count(s[i])){
                f=1;
                break;
            }
            seti.insert(s[i]);
            if(s[i]=='a') indA=i;
        }
        if(f==1|| seti.count('a')==0){
            cout<<"NO"<<"\n";
            continue;
        }

        int strt=indA-1,end=indA+1;
        char tp1=98,tp2='c';
        f=0;
        while(strt>=0 || end<n){
            // cout<<"hey:"<<(int)s[strt];
            if(strt>=0 && (int)s[strt]==tp1){
                strt--;
            }
            else if(end<n && (int)s[end]==tp1){
                end++;
            }
            else{
                // cout<<strt<<" "<<end<<"\n";
                f=1;
                break;
            }
            tp1++;

        }

        if(f==1)out("NO")
        else out("YES");

    }
}
