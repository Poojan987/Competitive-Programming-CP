#include <bits/stdc++.h>
#define ll long long int
#define F(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()

const int mod = 1e9 + 7;

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


/*
ll sie[100005]={0};

void pre()
{
   sie[1]=1;
   for(ll i=2;i*i<=100005;i++)
   {
      if(sie[i]==0)
      {
         sie[i]=i;
         for(ll j=i*i;j<=100005;j+=i)
         {
            if(sie[j]==0)
               sie[j]=i;
         }
      }
   }
   F(i,1,100005)
   {
      if(sie[i]==0)
         sie[i]=i;
   }
}
*/

int fun(int x1,int x2,int x3)
{
    int k=0;
    if(x1<=x2 && x2<=x3)
    {

    }
    else if(x1>=x2 && x2>=x3)
    {

    }
    else
    {
        k++;
    }
    return k;
}
int fun1(int x1,int x2,int x3,int x4)
{
    int i,k=0;
    k+=fun(x1,x2,x3);
    k+=fun(x1,x3,x4);
    k+=fun(x1,x2,x4);
    k+=fun(x2,x3,x4);
    if(k==4)return 1;
    return 0;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll test = 1;
   //	pre();
	cin>>test;
	while(test--)
	{
	    ll n;
	    cin>>n;
	    ll a[n],b[n],c[n];
	    F(i,0,n)
	    {
	        cin>>a[i];
	    }
	    ll ans=0,a1,a2,a3,a4;
	    F(i,0,n)
	    {
	        ans++;
	        a1=a[i];
	        if(i>0)
	        {
	            a2=a[i-1];
	            ans++;
	        }
	        if(i>1)
	        {
	            a3=a[i-2];
	            ans+=fun(a3,a2,a1);
	        }
	        if(i>2)
	        {
	            a4=a[i-3];
	            ans+=fun1(a4,a3,a2,a1);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
