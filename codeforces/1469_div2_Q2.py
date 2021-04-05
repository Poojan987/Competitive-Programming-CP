for _ in range(int(input())):
    n=int(input())
    r=list(map(int,input().split()))
    m=int(input())
    b=list(map(int,input().split()))

    i1,i2,p1,p2,n1,n2=0,0,0,0,0,0
    l1,l2=[],[]
    for i in r:
        p1+=i
        l1.append(p1)
    for i in b:
        p2+=i
        l2.append(p2)
    l1.append(0)
    l2.append(0)
    m1=max(l1)
    m2=max(l2)
       
    print(max(m1+m2,0))
    