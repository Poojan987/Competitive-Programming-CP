for _ in range(int(input())):
    l=list(map(int,input().split()))
    l.sort()
    ans=0
    if(l[1]==l[0] and l[0]==l[2]):
        ans=0
        # or ((l[1]==l[2])and (l[1]!=l[0]) )or ((l[0]==l[2])and (l[1]!=l[0]) )))
    elif(((l[0]==l[1])and (l[1]!=l[2]))):
        if(l[2]-l[0]!=1):
            l[0]+=1
            l[1]+=1
        l[2]-=1
        
        
        ans=abs(l[0]-l[2])+abs(l[1]-l[2])
    elif(((l[1]==l[2])and (l[0]!=l[2]))):
        if(l[2]-l[0]!=1):
            l[2]-=1
            l[1]-=1
        l[0]+=1
        # l[2]-=1
        # l[1]-=1
        ans=abs(l[0]-l[2])+abs(l[0]-l[1])
    else:
        l[0]+=1
        l[2]-=1
        ans=abs(l[0]-l[2])+abs(l[0]-l[1])+abs(l[1]-l[2])
    print(ans)