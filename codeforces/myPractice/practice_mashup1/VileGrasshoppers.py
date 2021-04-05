import math
def smallDivisor(y):
    for i in range(2,math.ceil(math.sqrt(y))+1):
        if(y%i==0):
            return i
        
    return y


p,y=map(int,input().split())
ans=-1
for j in range(y,p,-1):
    
    temp=smallDivisor(j)
    # print(temp)
    if(temp>p):
        ans=j
        break
print(ans)

