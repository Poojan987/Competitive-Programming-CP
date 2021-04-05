n,n1,n2=map(int,input().split())
l=list(map(int,input().split()))
l.sort(reverse=True)
s1,s2=0,0
ind=0
if(n1<=n2):
    for i in range(n1):
        s1+=l[i]
        ind+=1
    for i in range(n2):
        s2+=l[ind]
        ind+=1
else:
    for i in range(n2):
        s2+=l[ind]
        ind+=1
    for i in range(n1):
        s1+=l[ind]
        ind+=1
    

s1=s1/n1
s2=s2/n2
print(s1+s2)