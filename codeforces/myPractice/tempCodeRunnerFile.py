n=int(input())
l=list(map(int,input().split()))
s=sum(l)
s=s%(n+1)
if(s==1):
    print(1)
else:
    print(2)