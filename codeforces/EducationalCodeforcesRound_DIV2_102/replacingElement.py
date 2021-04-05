for _ in range(int(input())):
    n,d=map(int,input().split())
    l=list(map(int,input().split()))
    temp=l.copy()
    temp.sort()
    f=0
    ans="YES"
    for i in l:
        if(i>d):
            f=1
            ans="NO"
            break
    if(f==1):
        if(temp[0]+temp[1]<=d):
            ans="YES"
    print(ans)