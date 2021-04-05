def fact(n):
    l=[]
    up,t1=n,n-1
    down,t2=1,2
    l.append([up,down])
    num,den=up,down
    for i in range(n-1):
        num=num*(t1) 
        den=den*(t2)
        l.append([num,den])
        t1-=1
        t2+=1
    return l
print(fact(7))