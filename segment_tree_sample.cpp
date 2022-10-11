#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define int long long
#define forp(i, x, t) for (int i = x; i < t; i++)
#define forn(i, x, t) for (int i = x; i > t; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;

vector<int> tr;
int f(int node, int node_left, int node_right, int low, int high){
    if(low <= node_left && high >= node_right){
        return tr[node];
    }
    if(high < node_left || low > node_right){
        return INT_MAX;
    }
    int left_child = 2*node, right_child = 2*node + 1;
    int mid = (node_left + node_right) / 2;
    return min(f(left_child, node_left, mid, low, high), f(right_child, mid+1, node_right, low, high));
}
void update(int node){
    while(node >= 1){
        tr[node] = min(tr[2*node], tr[2*node + 1]);
        node /= 2;
    }
}
void solve(int in)
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    forp(i,0,n) cin>>a[i];
    while(__builtin_popcount(n) != 1)
    {
        a.pb(INT_MAX);
        n++;
    }
    tr.resize(2 * n);
    forp(i,n,2*n) tr[i] = a[i-n];
    for(int i = n-1; i >= 1; i--){
        tr[i] = min(tr[i*2], tr[i*2+1]);
    }
    while(q--){
        int t,l,r;
        cin>>t>>l>>r;
        if(t == 2) cout<<f(1,1,n,l,r)<<endl;
        else {
            tr[n + l-1] = r;
            update((n + l-1) / 2);
        }
    }
}
int32_t main()
{
    solve(0);
    return 0;
}
