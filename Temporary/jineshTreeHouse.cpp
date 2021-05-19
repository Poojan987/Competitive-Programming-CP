#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back

vector<ll> tree[300005];
vector<ll> sub,visited;
vector<pair<ll,ll> >v;

void dfs(ll node,ll par)
{
    for(auto child:tree[node])
    {
        if(child==par)
        {
            continue;
        }
        dfs(child,node);
    }
    v.clear();
    //cout<<"node "<<node+1<<" parent "<<par+1<<" ";
    for(auto child: tree[node])
    {
        if(child!=par)
        {
            v.push_back({sub[child],child});
        }
    }
    sort(v.rbegin(),v.rend());
    ll initial=1;
    for(auto it:v)
    {
        visited[it.second]=initial;
        initial++;
    }
    for(auto child:tree[node])
    {
        if(child!=par)
        {
            sub[node]=(sub[node]+visited[child]*sub[child]);
        }
    }
    //cout<<sub[node]<<endl;
    //cout<<sub[node]<<" "<<node<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,i;
        cin>>n>>x;
        sub.assign(n,1);
        visited.assign(n,0);

        ll a,b;
        for(i=0;i<n-1;i++)
        {
            cin>>a>>b;
            a--;
            b--;
            tree[a].pb(b);
            tree[b].pb(a);
        }
        dfs(0,-1);
        for(i=0;i<n;i++)
        {
            cout<<sub[i]%mod*x%mod<<endl;
        }

        cout<<sub[0]%mod*x%mod<<endl;
        for(i=0;i<=n;i++)
        {
            tree[i].clear();
        }
    }
}