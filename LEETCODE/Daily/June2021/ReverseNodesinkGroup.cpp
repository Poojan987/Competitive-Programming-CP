



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
// linked list code 
// node 
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  
  };

ListNode* reverseKGroup(ListNode* head, int k) {
        // int tp=0;
        stack<int>st;
        ListNode* itr=head;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        vector<vector<int> >v;
        int z=0;
        while(itr!=NULL){
            z++;
            // cout<<itr->val<<" ";
            st.push(itr->val);
            if(z==k){
                vector<int>tp;
                while(st.size()){
                    tp.push_back(st.top());
                    
                    st.pop();
                }
                v.push_back(tp);
                z=0;
            }
//             else{
//                 st.push(itr->val);
                
//             }
            itr=itr->next;
        }
        
        vector<int>tp;
        while(st.size()){
            // cout<<"hello"<<st.top()<<" ";
            tp.push_back(st.top());
            st.pop();
        }
        
        if(tp.size()){
            v.push_back(tp);
        }
        ListNode* tp1=NULL;
        ListNode* ans=tp1;
        
        
        for(int i=0;i<v.size();i++){
            if(v[i].size()==k){
            for(int j=0;j<v[i].size();j++){
                
                // cout<<v[i][j]<<" ";
                if(ans==NULL){
                    ListNode* node=new ListNode(v[i][j]);
                    tp1=node;
                    ans=tp1;
                    
                    
                }
                else{
                    // cout<<"hello";
                    ListNode* node=new ListNode(v[i][j]);
                    ans->next=node;
                    ans=ans->next;


                    // ListNode* last = ans;
                    // while(last->next) last=last->next;
                    // last->next = node;
                }
            }
            }
            else{
                for(int j=v[i].size()-1;j>=0;j--){
                    cout<<v[i][j]<<" ";
                    if(ans==NULL){
                    ListNode* node=new ListNode(v[i][j]);
                    tp1=node;
                    ans=tp1;
                
                }
                else{
                    ListNode* node=new ListNode(v[i][j]);
                    ans->next=node;
                    ans=ans->next;
                    //  ListNode* last = ans;
                    // while(last->next) last=last->next;
                    // last->next = node;
                }
                }
            }
        }
        
        
        return tp1;
       
    }
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
     int n,a,b;
     cin>>n>>a>>b;

     string s;
     in(s)
    ll sum=0;
    sum+=(a*n);

    if(b>=0){
        sum+=(b*n);
    }
    else{
        int z=1;
        char c=s[0];
        // while(s.size()){
        //     char c=s[0];
        //     // int mini
        //     for(int i=0;i<s.size();i++){

        //     }
        // }
        for(int i=1;i<n;i++){
            if(s[i]!=c){
                c=s[i];
                z++;
            }
        }
        sum+=(((z/2)+1)*(b));
        // cout<<"hello"<<z<<"\n";
    }
    out(sum);



} 

    
    return 0;
  

}