for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    sum1,ans,f2=sum(l),n-1,0
    for k in range(0,n):
        if(sum1%(n-k)==0):
            x=sum1/(n-k)
            cur,f1=0,0
            for j in range(len(l)):
                cur+=l[j]
                if(cur==x):
                    cur=0
                elif(cur>x):
                    f1=1
                    break
            if(f1==0):
                ans=k
                f2=1
                break
    
    print(ans)
            
