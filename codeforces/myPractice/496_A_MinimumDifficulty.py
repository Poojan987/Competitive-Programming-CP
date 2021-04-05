n=int(input())
l=list(map(int,input().split()))
mini=1000
d=[]
for i in range(1,len(l)):
    d.append(l[i]-l[i-1])
    
maxi=max(d)
for i in range(1,len(d)):
    mini=max(min(mini,d[i]+d[i-1]),maxi)
# for j in range(1,len(l)-1):
#     mini=max(l[j+1]-l[j-1],mini)
# print(mini)
# for i in range(1,len(l)-1):
#     var=l[i]-l[i-1]
#     if(var==mini):
#         mini=min(l[i+1]-l[i-1],mini)
#     # temp=[]
#     # for j in range(0,len(l)):
#     #     if(j!=i):
#     #         temp.append(l[j])
#     # maxi=0
#     # for j in range(1,len(temp)):
#     #     maxi=max(temp[j]-temp[j-1],maxi)
#     # mini=min(maxi,mini)
print(mini)