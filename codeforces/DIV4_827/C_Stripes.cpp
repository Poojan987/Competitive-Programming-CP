#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forl(i,a,b) for(int i=a;i<b;i++)

int main()
{ 
    int t=1;
    std::cin>>t;
    while (t--)
    {
        vector<vector<char>>v(8);
        forl(i,0,8)
            forl(j,0,8)
            {
                char c;
                cin>>c;
                v[i].pb(c);
            };
        char c='R';
        forl(i,0,8)
        {
            if (v[i][0]=='R')
            {
                bool check=true;
                forl(j,1,8)
                    if (v[i][j]!=v[i][j-1])
                        check=false;
                if (check&&v[i][0]!='.')
                c='R';
            }
        }
        forl(i,0,8)
        {
            if (v[0][i]=='B')
            {
                bool check=true;
                forl(j,1,8)
                    if (v[j][i]!=v[j-1][i])
                        check=false;
                if (check&&v[0][i]!='.')
                c='B';
            }
        }
        cout<<c<<endl;
    }
    return 0;
}