for _ in range(int(input())):
    a,b,k=map(int,input().split())
    boys=list(map(int,input().split()))
    girls=list(map(int,input().split()))
    d={}

    for i in range(k):
        if(boys[i] not in d):
            d[boys[i]]=[]
        d[boys[i]].append(girls[i])
    ans=0
    
    for i in d:
        print("i: ",i," len d[i]: ",len(d[i]))
        ans+=(len(d[i])*(len(d)-1))
    if(ans<0):
        ans=0
    print(ans)

        

        