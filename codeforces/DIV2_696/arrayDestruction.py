import bisect
import sys 

for _ in range(int(input())):
    n=int(input())
    # l=list(map(int,input().split()))
    name = sys.stdin.readline() 
    l=list(map(int,name.split()))
    ans=[]
    
    
    l.sort()
    
    ans="NO"
    ansList=[]
    d={}
    for i in l:
        if i not in d:
            d[i]=0
        d[i]+=1
    # d.sort()
    maxi=max(l)
    # print(d)
    i=0
    j=len(l)-1
    
    while(i<j):
        removed=2
        ind1,ind2=1,len(l)-2
        
        f=0
        dTemp=d.copy()
        
        e1=l[i]
        dTemp[e1]-=1
        e2=l[len(l)-1]
        dTemp[e2]-=1


        ansList.append(e1+e2)
        maxi=max(e1,e2)
        ansList.append(e1)
        ansList.append(e2)
       
        while(ind2>0 and dTemp[l[ind2]]<=0):
                ind2-=1
                if(ind2==0):
                    f=1 
                    break
        if(f==1):
            ansList.clear()
            continue
        while(removed<len(l)):
            e2=l[ind2]
            dTemp[e2]-=1

            if(maxi-e2 not in dTemp ):
                f=1
                break
            elif(dTemp[maxi-e2]<=0):
                f=1
                break
            else:
                e1=maxi-e2
                dTemp[e1]-=1


            
            ansList.append(e1)
            ansList.append(e2)
            
            maxi=max(e1,e2)
            
            removed+=2
            ind2-=1
            if(removed>=len(l)):
                break

            
            while(ind2>0 and dTemp[l[ind2]]<=0):
                ind2-=1
                if(ind2==0):
                    f=1 
                    break
            if(f==1):
                break
            
            
        i+=1
        # j-=1
        if(f==0):
            ans="YES"
            break
        else:
            ansList.clear()
    if(ans=="NO"):
        print(ans)
    else:
        print(ans)
        print(ansList[0])
        for i in range(1,len(ansList),2):
            print(ansList[i],ansList[i+1])



            






