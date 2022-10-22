class Solution {
public:
    int reverse(int n){
        int res=0;
        while(n!=0){
            int rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
            s.insert(reverse(x));
        }
        return s.size();
    }
};
