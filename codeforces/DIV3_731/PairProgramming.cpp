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
       int k,m,n;
       cin>>k>>n>>m;

        queue<int>q1,q2;

        for(int i=0;i<n;i++){
            int tp;
            in(tp)
            q1.push(tp);
        }
        for(int i=0;i<m;i++){
            int tp;
            in(tp)
            q2.push(tp);
        }
        int f=0;
        vector<int>ans;
        for(int i=0;i<n+m;i++){
            int s1=q1.size(),s2=q2.size();
            int tp1=-1,tp2=-1;
            if(s1){
                tp1=q1.front();

            }
            if(s2){
                tp2=q2.front();
            }
            if(tp1==0) {
                k++;
                q1.pop();
                ans.push_back(tp1);
                continue;
            }
            if(tp2==0){
                k++;
                q2.pop();
                ans.push_back(tp2);
                continue;
            }
            if(tp1==-1){
                if(tp2<=k){
                    q2.pop();
                ans.push_back(tp2);
                }
                else{
                    f=1;
                    break;
                }
                continue;
            }
            if(tp2==-1){
                    if(tp1<=k){
                    q1.pop();
                ans.push_back(tp1);
                }
                else{
                    f=1;
                    break;
                }
                continue;
            }

            if( (tp1<tp2||tp1==tp2)&& tp1<=k){
                q1.pop();
                ans.push_back(tp1);
                continue;
            }
            else if( (tp2<tp1)&&tp2<=k){
                q2.pop();
                ans.push_back(tp2);
            }
            else{
                f=1;
                break;
            }
            



        }
        // out("hello");
        if(f==1){
               f(i,n+m){
                // cout<<ans[i]<<" ";
            }
            cout<<"\n";
            out(-1)
        }
        else{

            f(i,n+m){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
