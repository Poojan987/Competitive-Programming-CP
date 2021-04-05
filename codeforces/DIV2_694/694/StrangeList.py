import math
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    f,c,sum1=0,0,0

    l=[]
    pahunch=[]
    for i in range(len(a)):
        temp,c2=[],0
        sum1=0
        while(a[i]%x==0):
            sum1+=(pow(x,c2)*a[i])
            temp.append(sum1)
            c2+=1
            a[i]=a[i]/x
        l.append(temp)
        pahunch.append(c2)
    min1,ind=0,0
    for i in l:
        min1=min(i.size(),min1)
        if(min1<=m):
            ind+=1
    
        

    # while(f==0):
    #     for i in range(len(a)):
    #         if(a[i]<0):
    #             f=1
    #             break
    #         sum1+=(pow(x,c)*a[i])
    #         if(a[i]%x!=0):
    #             a[i]=-1
    #         a[i]=a[i]/x
    #         # print(a)
            
    #     c+=1
        
    print(int(sum1))
