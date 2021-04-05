from itertools import accumulate  
import bisect   
def cumulativeSum(lst):  
    return (list(accumulate(lst)))  

for _ in range(int(input())):
    n,k=map(int,input().split())
    h=list(map(int,input().split()))
    h.sort()
    if(n==1 or sum(h)<(2*k)):
        print(-1)
    else:
        l1,l2=[],[]
        s1,s2,ind=h[len(h)-1],0,0
        h.pop(len(h)-1)

        
        
        
        s1=k-s1

        while(s1>0 and len(h)>0):
            ind1=bisect.bisect_left(h,s1)
            if(ind1==len(h)):
                ind1-=1
                s1-=h[ind1]
                h.pop(ind1)
            elif(ind1==0 or h[ind1]==s1):
                s1-=h[ind1]
                h.pop(ind1)
            else:
                ind1-=1
                s1-=h[ind1]
                h.pop(ind1)
        if(len(h)>0):
            s2=k-h[len(h)-1]
            h.pop(len(h)-1)
        # print(h)
        while(s2>0 and len(h)>0):
            ind1=bisect.bisect_left(h,s2)
            if(ind1==len(h)):
                ind1-=1
                s2-=h[ind1]
                h.pop(ind1)
            elif(ind1==0 or h[ind1]==s2):
                s2-=h[ind1]
                h.pop(ind1)
            else:
                ind1-=1
                s2-=h[ind1]
                h.pop(ind1)        
        
        
        print(s1,s2)
        if(s1<=0 and s2<=0):
            print(n-len(h))
       
        else:
            print(-1)

        
            

        



