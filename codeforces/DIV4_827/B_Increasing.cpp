#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t=1;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        vector<int> a(n);
        map<int,int> m;
        bool check=true;
        for(int i=0,i<n;i++)
        { 
            cin>>a[i];
            m[a[i]]++;
            if (m[a[i]]==2)
            check=false;
        }
        cout<<(check==true?"YES":"NO")<<endl;
    }
    return 0;
}