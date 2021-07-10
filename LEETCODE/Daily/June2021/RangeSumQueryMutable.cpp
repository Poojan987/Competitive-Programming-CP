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
// segmented tree concept
vector<int>v;
int n;
NumArray(vector<int>& nums) {
    int tp=nums.size();

    n=nums.size()*2;
    vector<int>tpV(n);
    v=tpV;
    
    for(int i=n,j=0;i<2*n;i++,j++){
        v[i]=nums[j];
        cout<<"hello";
    }
    n=tp;
    
}

void update(int index, int val) {
    int pos=index+n;
    v[index]=val;
    while(pos>0){
        int l=pos,r=pos;
        if(pos%2==0){
            r=pos+1;
        }
        else{
            l=pos-1;
        }
        v[pos/2]=v[l]+v[r];
        pos/=2;
    }


}

int sumRange(int left, int right) {
    left+=n;right+=n;
    int sum=0;
    while(left<=right){
        if(left%2==1) {
            sum+=v[left];
            left--;
        }
        else if(right%2==0) {
            sum+=v[right];
            right--;
        }
        left/=2;
        right/=2;
    }
    return sum;


}



int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    
    



}