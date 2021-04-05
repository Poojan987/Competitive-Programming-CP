import math
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    s=sum(a)
    s=math.ceil(s/x)
    s2=0
    for i in a:
        s2+=(math.ceil(i/x))
    print(min(s,s2),max(s,s2))