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
    else:
        l1,l2=[],[]
        s1,s2,ind=h[0],h[1],0
        h.pop(0)
        h.pop(0)
        
        s1=k-s1
        s2=k-s2
        # print(h)
        # print(s1,s2)
        h.sort()
        while(s1>0 and s2>0 and len(h)>0):
            ind1=bisect.bisect_left(h,s1)
            # print("ind1: ",ind1)
            if(ind1==len(h)):
                ind1-=1
            s1-=h[ind1]
            h.pop(ind1)
            # print(h)
            if(s1<=0 or len(h)==0):
                break
            ind2=bisect.bisect_left(h,s2)
            if(ind2==len(h)):
                ind2-=1
            s2-=h[ind2]
            h.pop(ind2)
        # print(s1,s2)
        if(s1<=0 and s2>0):
            h.sort(reverse=True)
            while(len(h)>0 and s2>0):
                s2-=h[0]
                h.pop(0)
        elif(s2<=0 and s1>0):
            h.sort(reverse=True)
            while(len(h)>0 and s1>0):
                s1-=h[0]
                h.pop(0)
            
        if(s1<=0 and s2<=0):
            print(n-len(h))
       
        else:
            print(-1)

        
            

        



