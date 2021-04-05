n=int(input())
l=list(map(int,input().split()))
c=0
ind=[]
for i in range(1,len(l)-1):
    if(l[i]==0 and (l[i-1]==l[i+1] and l[i-1]==1)):
        c+=1
        ind.append(i)
ans=0
# if(len(ind)==1):
#     ans=1
index=0
while(index<len(ind)):
    # print(i,ind[i])
    ans+=1
    if(index==len(ind)-1):
        # ans+=1
        break
    if(ind[index+1]==ind[index]+2):
        # ans+=1
        index+=1
        # continue
    
    index+=1
    
print(ans)