for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort(reverse=True)
    s1=sum(a)
    s2=sum(b)
    i1,i2,ans=0,0,0
    while(s1<=s2 and i1<len(a) and i1<len(b)):
        s1-=a[i1]
        s1+=b[i1]
        s2-=b[i1]
        s2+=a[i1]
        i1+=1
        ans+=1
    if(s1>s2):
        print(ans)
    else:
        print(-1)

