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
        int x1,x2,y1,y2,f1,f2;
        cin>>x1>>y1>>x2>>y2>>f1>>f2;

        int tp1=max(x1,x2)-min(x1,x2);
        int tp2=max(y1,y2)-min(y1,y2);
        if(f1==x1 && f1==x2){
            if(f2<(max(y1,y2))&&f2>min(y1,y2)){
                tp1+=2;
            }
        }
        else if(f2==y1 && f2==y2){
            if(f1<(max(x1,x2))&&f1>min(x1,x2)){
                tp1+=2;
            }
        }
        // out("hello");
        out(tp1+tp2);
        
    }
}
