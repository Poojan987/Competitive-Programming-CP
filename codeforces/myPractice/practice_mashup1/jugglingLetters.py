for _ in range(int(input())):
    n=int(input())
    l=[]
    for _1 in range(n):
        s=input()
        l.append(s)
    d={}
    for str in l:
        for i in str:
            if(i not in d):
                d[i]=0
            d[i]+=1
    ans="YES"
    for key,value in d.items():
        if(value%n!=0):
            ans="NO"
            break
    print(ans)
