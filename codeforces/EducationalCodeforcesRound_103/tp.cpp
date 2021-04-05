#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k,i;
       cin>>n,k;

      ll arr[n];
      for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

      ll sum=arr[0];

      ll ans=0;
      for(i=1;i<n;i++){
          ll temp=(arr[i]*100-(k*sum));
          if(temp>0 && temp%k!=0){
             ans+=(temp/k)+1;
             temp=(temp/k)+1;
          }
          else if(temp>0){
              ans+=temp/k;
              temp=(temp/k);
          }
          else{
              temp=0;
          }

          sum+=arr[i]+temp;
      }
        cout<<ans<<endl;

    }
    return 0;
}