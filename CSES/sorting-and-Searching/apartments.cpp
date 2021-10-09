#include <bits/stdc++.h>
using namespace std;
// Sorting Applicants takes O(nlog(n))
// SOrting Sizes of Appartments O(mlog(m))
// Final loop to assign Appartments O(m+n)
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app(n);
    vector<int> siz(m);
    for(int i=0; i<n; i++){
        cin >> app[i];
    }
    for(int i=0; i<m; i++){
        cin >> siz[i];
    }
    sort(app.begin(), app.end());
    sort(siz.begin(), siz.end());
    int i=0, j=0, count = 0;
    for(; i<n && j<m;){
        // cout << "a[" << i<< "] : " << app[i] << "\t\t" << "siz[" << j << "] : " << siz[j] << endl;
        if(siz[j]<=(app[i] + k) && siz[j]>=(app[i]-k)){
            // cout << "-----------" << app[i] << "====" << siz[j] << endl;
            i++;
            j++;
            count++;
            continue;
        }
        if((app[i]-k)>siz[j]){
            j++;
            continue;
        }
        if((app[i]+k)<siz[j]){
            i++;
        }
    }
    cout << count << endl;
    return 0;
}