for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    mini,maxi=l[0],l[0]
    iMin,iMax=0,0
    f=0
    for i in range(len(l)):
        if(l[i]<=mini):
            iMin=i
            mini=l[i]
        elif(l[i]>=maxi):
            iMax=i
            maxi=l[i]
        if(abs(iMax-iMin)!=0 and maxi-mini>=abs(iMax-iMin+1)  ):
            f=1
            break
    if(f==1):
        print("YES")
        print(min(iMin,iMax)+1,max(iMin,iMax)+1)
    else:
        print("NO")