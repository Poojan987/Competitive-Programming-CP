n=int(input())
l=list(map(int,input().split()))
s=sum(l)
# s=s%(n+1)
tp=[]
for i in range(1,6):
    tp.append(i+s)
c=0
for i in range(len(tp)):
    tp[i]=tp[i]%(n+1)
    if(tp[i]!=1):
        c+=1

print(c)
