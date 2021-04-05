for _ in range(int(input())):
    n,k=map(int,input().split())
    h=list(map(int,input().split()))
    h.sort(reverse=True)
    if(n==1 or sum(h)<(2*k)):
        print(-1)
    else:
        s1,s2=k-h[0],k-h[1]
        h[0],h[1]=-1,-1
        while(s1>0):
            f=0
            for i in range(2,len(h)):
                if(h[i]==-1):
                    continue
                elif((s1-h[i])>=0 or i==len(h)-1):
                    s1-=h[i]
                    h[i]=-1
                    f=1
                    break
        while(s2>0):
            for i in range(2,len(h)):
                if(h[i]==-1):
                    continue
                elif((s2-h[i])>=0 or i==len(h)-1):
                    s2-=h[i]
                    h[i]=-1
                    break
    
    print(h.count(-1))



