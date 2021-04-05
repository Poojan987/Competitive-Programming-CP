#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }

int * SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    int* ALLPRIMES=new int[n],count=0;
    for (int p=2; p<=n; p++) {
       if (prime[p]) {
          ALLPRIMES[count]=p;
        count++;
       }
    }
       return ALLPRIMES;
    
} 
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
bool sortByVal(const pair<int, double> &a, 
               const pair<int, double> &b) 
{ 
    return (a.second < b.second); 
} 


vector<int> adjacencyList[500000];
int visited[500000];

void dfs(int index){
    if(visited[index]==0){
        visited[index]=1;
        for(int i=0;i<adjacencyList[index].size();i++){
            if(visited[adjacencyList[index][i]]==0){
                dfs(adjacencyList[index][i]);
            }
        }
    }
}

int binarySearch(vector<ll>&prefixSum,vector<ll>&suffixSum,int l,int r,ll backElement,ll FrontElementSufix){

    if(l>r) return -1;
    int mid=(l+r)/2;
    
    if(prefixSum[mid]-backElement==suffixSum[mid]-FrontElementSufix){
        return mid;
    }
    else if(prefixSum[mid]-backElement>suffixSum[mid]-FrontElementSufix){
        return binarySearch(prefixSum,suffixSum,l,mid-1,backElement,FrontElementSufix);
    }
    else{
        return binarySearch(prefixSum,suffixSum,mid+1,r,backElement,FrontElementSufix);
    }
    return 1;
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
ll cost(int a[], int n)
{
    
        ll cost=0;
        int z[n];
        f(i,n) z[i]=a[i];
        for(int i=0;i<n-1;i++){
            pair<int,int> p=make_pair(z[i],i);
            for(int j=i+1;j<n;j++){
                if(z[j]<p.first){
                    p=make_pair(z[j],j);
                }
            }
            int end=((p.second));
            
            for(int j=0;j<=(p.second-i)/2;j++){
                int a1=z[j+i],a2=z[end];
                z[j+i]=a2;
                z[end]=a1;
                end--;
            }
            
            cost+=(p.second-i+1);
            // display(a,n);
            
        }
        return cost;
      
}

int* findPermutations(int a[], int n,int givenCost)
{
   sort(a, a + n);
   int count=0;
//    int dummy[n];
//    dummy[0]=-1;
    do {
        // display(a,n);
        ll c=cost(a, n);
        // out("hel1");
        if(c==givenCost){
            return a;
        }
        // out(cost);
        // count++;
    } while (next_permutation(a, a + n));
    return NULL;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      for(int abcd=0;abcd<t;abcd++){
        int n,c;
        cin>>n>>c;
        
        int a[n];
        f(i,n) a[i]=i+1;
        int temp[n];
        temp[0]=-1;

        int *ans;
        ans=findPermutations(a,n,c);

        
        




      


 cout<<"Case #"<<abcd+1<<": ";
 if(ans==NULL){
            out("IMPOSSIBLE");
            continue;
        }
for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}