for _ in range(int(input())):
    n,k=map(int,input().split())
    h=list(map(int,input().split()))
    h.sort(reverse=True)
    
    l1,l2=[],[]
    s1,s2,ind=0,0,0
    for i in range(len(h)):
        if(s1>=k):
            while(i<len(h) and s2<k):
                s2+=h[i]
                h[i]=-1
                i+=1
            break
        elif(s2>=k):
            while(i<len(h) and s1<k):
                s1+=h[i]
                h[i]=-1
                i+=1
            break
        elif(i%2==0):
            s1+=h[i]
            h[i]=-1
        else:
            s2+=h[i]
            h[i]=-1
        

    if(s2>=k and s1>=k):
        print(h.count(-1))
    else:
        print(-1)



