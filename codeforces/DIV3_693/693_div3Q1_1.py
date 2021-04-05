for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    ans=[]
    i,j=0,n-1
    while(i<j):
        ans.append(l[i])
        ans.append(l[j])
        i+=1
        j-=1
    if(n%2!=0):
        ans.append(l[i])
    for i in ans:
        print(i,end=" ")
    print()

