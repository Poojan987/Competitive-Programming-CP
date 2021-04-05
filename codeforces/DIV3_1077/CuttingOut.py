n,k=map(int,input().split())
l=list(map(int,input().split()))
d={}
tp=[]
for i in l:
    if(i not in d):
        d[i]=0
    d[i]+=1
    # print(d[i])
for i in d:
    tp.append([d[i],i])
tp.sort(reverse=True)

ans=[]
for i in range(len(tp)):
    p=1
    while(tp[i][0]//p!=0):
        ans.append([tp[i][0]//p,tp[i][1]])
        p+=1
ans.sort(reverse=True)
for i in range(k):
    print(ans[i][1],end=" ")


print()
    

