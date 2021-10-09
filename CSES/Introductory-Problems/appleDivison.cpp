#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// Checking every possible subset combination
// For each element we have two options either to consider it in given set or not

ll n, local_min, global_min = 1e15, temp, idx;
vector<ll> p, s1;

void solve(ll i){
    if(i == n){
        local_min = idx = 0;
        if(s1.size() == 0){
            local_min =  accumulate(p.begin(), p.end(), local_min);
            local_min = (-local_min);
            if(abs(local_min) < global_min){
                global_min = abs(local_min);
                // for(auto j: s1){
                //     cout << j << " ";
                // }
                // cout << endl;
                // cout << "Global Changed to: " << global_min << endl;
            }
            return;
        }
        for(int j=0; j<n; j++){
            if(s1[idx] == j && s1.size() > idx){
                local_min += p[j];
                idx++;
            }else{
                local_min -= p[j];
            }
        }
        if(abs(local_min) < global_min){
            global_min = abs(local_min);
            // for(auto j: s1){
            //     cout << j << " ";
            // }
            // cout << endl;
            // cout << "Global Changed to: " << global_min << endl;
        }
        return;
    }
    solve(i + 1);
    s1.push_back(i);
    solve(i+1);
    s1.pop_back();
    return;
}


int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        p.push_back(temp);
    }
    solve(0);
    cout << global_min << endl;
    return 0;
}