n=int(input())
l=list(map(int,input().split()))
s=sum(l)
m=max(l)
tp=l.copy()
tp.sort(reverse=True)
ans=[]
for i in range(len(l)):
    temp=s
    temp-=l[i]
    if(l[i]==m):
        if(temp-tp[1]==tp[1]):
            ans.append(i+1)
        continue
    if(temp-m==m):
        ans.append(i+1)
print(len(ans))
for i in range(len(ans)):
    print(ans[i],end=" ")
print()