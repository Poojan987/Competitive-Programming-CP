#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
// #define endl "\n"
typedef long long ll;
#define forp(i, x, t) for (int i = x; i < t; i++)
#define forn(i, x, t) for (int i = x; i > t; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int MAXN = 10000001;
int spf[MAXN];
int fact[N], invfact[N];
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
#define int long long
// void __print(int x) {cerr << x;}


void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

/*

AUTHOR: 

$$$$$$$\            $$\                           
$$  __$$\           $$ |                          
$$ |  $$ | $$$$$$\  $$$$$$$\   $$$$$$\  $$$$$$$\  
$$$$$$$  |$$  __$$\ $$  __$$\  \____$$\ $$  __$$\ 
$$  __$$< $$ /  $$ |$$ |  $$ | $$$$$$$ |$$ |  $$ |
$$ |  $$ |$$ |  $$ |$$ |  $$ |$$  __$$ |$$ |  $$ |
$$ |  $$ |\$$$$$$  |$$ |  $$ |\$$$$$$$ |$$ |  $$ |
\__|  \__| \______/ \__|  \__| \_______|\__|  \__|
                                                  
                                                  
$$$$$$$\                     $$\ $$\       $$\       
$$  __$$\                    \__|$$ |      $$ |      
$$ |  $$ |$$$$$$\   $$$$$$\  $$\ $$ |  $$\ $$$$$$$\  
$$$$$$$  |\____$$\ $$  __$$\ $$ |$$ | $$  |$$  __$$\ 
$$  ____/ $$$$$$$ |$$ |  \__|$$ |$$$$$$  / $$ |  $$ |
$$ |     $$  __$$ |$$ |      $$ |$$  _$$<  $$ |  $$ |
$$ |     \$$$$$$$ |$$ |      $$ |$$ | \$$\ $$ |  $$ |
\__|      \_______|\__|      \__|\__|  \__|\__|  \__|
                                                     
*/

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

bool is_prime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}
 
int pow(int a, int b, int m)
{
	int ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}
 
int modinv(int k)
{
	return pow(k, mod-2, mod);
}
 
void precompute()
{
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++)
	{
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
	invfact[N-1]=modinv(fact[N-1]);
	for(int i=N-2;i>=0;i--)
	{
		invfact[i]=invfact[i+1]*(i+1);
		invfact[i]%=mod;
	}
}
 
int nCr(int x, int y)
{
	if(y>x)
		return 0;
	int num=fact[x];
	num*=invfact[y];
	num%=mod;
	num*=invfact[x-y];
	num%=mod;
	return num;
}
 
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
bool ssort(const vector<int> &a, const vector<int> &b){
    return a[1] > b[1];
}
string toBinary(int n)
{
    string r;
    while (n != 0)
    {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}  

void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
double distance(int a, int b){
    return sqrt(a*a + b*b);
}
void nextPermutation(vector<int>& arr)
{
    int n = arr.size(), i, j;
 
    // Find for the pivot element.
    // A pivot is the first element from
    // end of sequencewhich doesn't follow
    // property of non-increasing suffix
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            break;
        }
    }
 
    // Check if pivot is not found
    if (i < 0) {
        reverse(arr.begin(), arr.end());
    }
 
    // if pivot is found
    else {
 
        // Find for the successor of pivot in suffix
        for (j = n - 1; j > i; j--) {
            if (arr[j] > arr[i]) {
                break;
            }
        }
 
        // Swap the pivot and successor
        swap(arr[i], arr[j]);
 
        // Minimise the suffix part
        reverse(arr.begin() + i + 1, arr.end());
    }
}
 
void solve(int in)
{
    int ans = 0;
    int n, e;
    cin>>n>>e;
    vector<vector<int>> a(n+1, vector<int> (3));
    a[0][0] = 0, a[0][1] = 1e18, a[0][2] = 0;
    // a[0] = {0ll,1e18,0ll};
    forp(i,1,n+1){
        forp(j,0,3) cin>>a[i][j];
    }
    sort(all(a), ssort);
    deb(a);
    map<int, vector<vector<int>>, greater<int>> m;
    forp(i,0,n+1){
        m[a[i][1]].pb({a[i][0], a[i][2], LLONG_MIN, LLONG_MIN});
    }
    for(auto it = m.begin(); it != m.end(); it++){
        sort(all(m[it->first]));
        
        forp(i,0,it->second.size()){
            for(auto iter = m.begin(); iter != it; iter++){
                forp(j,0,iter->second.size()){
                    if(iter->second[j][0] < it->second[i][0]){
                        it->second[i][2] = max({it->second[i][2], iter->second[j][2] + it->second[i][1], iter->second[j][3] + it->second[i][1] - e });
                        it->second[i][3] = max(it->second[i][2] - e, iter->second[j][3]);
                    }
                    else if(iter->second[j][0] > it->second[i][0]){
                        it->second[i][3] = max({it->second[i][3], iter->second[j][3] + it->second[i][1], iter->second[j][2] + it->second[i][1] - e });
                        it->second[i][2] = max(it->second[i][3] - e, iter->second[j][2]);
                    }
                    else{
                        it->second[i][2] = max({it->second[i][2], iter->second[j][2] + it->second[i][1], iter->second[j][3] + it->second[i][1] - e });
                        it->second[i][3] = max({it->second[i][3], iter->second[j][3] + it->second[i][1], iter->second[j][2] + it->second[i][1] - e });
                    }
                }
            }
                ans = max({ans, it->second[i][2], it->second[i][3]});
        }

        it->second[0][2] = max(it->second[0][2], it->second[0][1]);
        forp(i,1,it->second.size()){
            it->second[i][2] = max({it->second[i][2], it->second[i-1][2] + it->second[i][1], it->second[i-1][3] + it->second[i][1] - e});
                ans = max({ans, it->second[i][2], it->second[i][3]});

        }
        it->second.back()[3] = max(it->second.back()[3], it->second.back()[1] - e);
        // deb("hi");
        for(int i = it->second.size() - 2; i >= 0; i--){
            it->second[i][3] = max({it->second[i][3], it->second[i+1][3] + it->second[i][1], it->second[i+1][2] + it->second[i][1] - e});
            ans = max({ans, it->second[i][2], it->second[i][3]});

        }
        // deb(it->first);
        // deb(it->second);
    }




    // vector<pair<int, int>> v(n+1);
    // v[0] = {0,-e};
    // forp(i,1,n+1){
    //     v[i] = {LLONG_MIN, LLONG_MIN};
    //     forp(j,0,i){
    //         if(a[j][0] < a[i][0]){
    //             v[i].first = max({v[i].first, v[j].first + a[i][2], v[j].second + a[i][2] - e});
    //             v[i].second = max(v[i].second, v[i].first - e);
    //         }
    //         else if(a[j][0] > a[i][0]){
    //             v[i].second = max({v[i].second, v[j].second + a[i][2], v[j].first + a[i][2] - e});
    //             v[i].first = max(v[i].first, v[i].second - e);
    //         }
    //         // else{
    //         //     v[i].first = max({v[i].first, v[j].first + a[i][2], v[j].second + a[i][2] - e});
    //         //     v[i].second = max({v[i].second, v[j].second + a[i][2], v[j].first + a[i][2] - e});
    //         // }
    //     }
    //     ans = max({ans, v[i].first, v[i].second});
    //     // deb(i, ans);jj
    // }
    // forp(i,1,n+1){
    //     // v[i] = {LLONG_MIN, LLONG_MIN};
    //     forp(j,0,n+1){
    //         if(a[j][1] > a[i][1]) break;
    //         if(a[j][0] < a[i][0]){
    //             v[i].first = max({v[i].first, v[j].first + a[i][2], v[j].second + a[i][2] - e});
    //             v[i].second = max(v[i].second, v[i].first - e);
    //         }
    //         else if(a[j][0] > a[i][0]){
    //             v[i].second = max({v[i].second, v[j].second + a[i][2], v[j].first + a[i][2] - e});
    //             v[i].first = max(v[i].first, v[i].second - e);
    //         }
    //         else{
    //             v[i].first = max({v[i].first, v[j].first + a[i][2], v[j].second + a[i][2] - e});
    //             v[i].second = max({v[i].second, v[j].second + a[i][2], v[j].first + a[i][2] - e});
    //         }
    //     }
    //     ans = max({ans, v[i].first, v[i].second});
    //     // deb(i, ans);
    // }
    // do{
    //     // ans++;
    //     int x = a[perm[0]-1][0], y = a[perm[0]-1][1], cur = a[perm[0]-1][2];
    //     ans = max(ans, cur);
    //     int dir = 1;
    //     forp(i,1,perm.size()){
    //         int cx = a[perm[i]-1][0], cy = a[perm[i]-1][1], cc = a[perm[i]-1][2];
    //         if(cy <= y){
    //             if(cx < x && dir == 1){
    //                 cur -= e;
    //                 dir = 0;
    //             }
    //             else if(cx > x && dir == 0){
    //                 cur -= e;
    //                 dir = 1;
    //             }
    //             cur += cc;
    //             x = cx;
    //             y = cy;
    //         }         
    //         ans = max(ans, cur);
    //     }
    //     nextPermutation(perm);
    //     // deb(perm);
    // } while(!is_sorted(all(perm)));
    cout<<"Case #"<<in<<": "<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    forp(i, 1, t + 1)
    {
        solve(i);
    }
    return 0;
}
