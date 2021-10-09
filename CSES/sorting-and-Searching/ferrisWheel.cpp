#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> p(n);
    vector<bool> taken(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
        taken[i] = false;
        // cout << i << endl;
    } 
    sort(p.begin(),p.end());
    // for(auto &i: p){
    //     cout << i;
    // } 
    int count{n};
    int i=0, j=n-1;
	while(i<j)
	{
		if(p[i]+p[j]<=x){
            count--;
            i++;
            j--;
        }
		else{
            j--;
        } 
	}
    cout << count << endl;
    return 0;
}