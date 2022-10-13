#include <bits/stdc++.h> 

using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> count(n+1,0);
    pair<int,int> k;
    int k1=0,k2=0;
    
    for(int i=0;i<n;i++){
        count[arr[i]]++;   
    }
    for(int i=1;i<=n;i++){
        if(count[i]==0){
            k2=i;
        }
        if(count[i]==2){
            k1=i;
        }
    }
    k=make_pair(k2,k1);
    return k;  
}
