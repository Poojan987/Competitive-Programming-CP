from itertools import accumulate  
import bisect   
def cumulativeSum(lst):  
    return (list(accumulate(lst)))  

for _ in range(int(input())):
    n,k=map(int,input().split())
    h=list(map(int,input().split()))
    h.sort(reverse=True)
    if(n==1 or sum(h)<(2*k)):
        print(-1)
    elif(h[0]>=k and h[1]>=k):
        print(2)
    else:
        l=set()
        s1,s2,sumT=0,0,0
        l.add(h[0])
        cnt=-1
        for i in range(len(h)):
            sumT+=h[i]
            # l.add(h[i])
            s1,s2=0,0
            for j in (list(l)):
                l.add(h[i])
                # l.add(j)
                s1=j+h[i]
                l.add(s1)
                s2=sumT-s1
                if(s1>=k and s2>=k):
                    cnt=i+1
                    break
                # print(l)
            if(cnt!=-1):
                break
        print(cnt)


        
            

        



