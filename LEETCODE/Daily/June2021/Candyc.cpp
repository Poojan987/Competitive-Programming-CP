int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        vector<int>temp(n,-1);
        
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            
             mini=min(mini,ratings[i]);
        }
        int ind=-1;
        for(int i=0;i<n;i++){
            if(ratings[i]==mini){
                temp[i]=1;
                if(ind==-1)ind=i;
            }
            
        }
        
        for(int i=ind+1;i<n;i++){
            
            if(ratings[i]==mini) continue;
            // cout<<"hey"<<i+1;
            if(i+1<n && temp[i+1]!=1 && ratings[i-1]>=ratings[i]){
                temp[i]=1;
            }
            
             if(ratings[i-1]<ratings[i] ){
                temp[i]=temp[i-1]+1;
                
            }
            else{
                temp[i]=1;
            }
            
        }
        
       for(int i=ind-1;i>=0;i--) {
           if(temp[i+1]==1){
               temp[i]=2;
           }
           else if(i+1<n && ratings[i+1]<ratings[i]){
               temp[i]=temp[i+1]+1;
           }
           else{
               temp[i]=1;
           }
       }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=temp[i];
            // cout<<temp[i]<<" ";
        }
        return sum;
    }