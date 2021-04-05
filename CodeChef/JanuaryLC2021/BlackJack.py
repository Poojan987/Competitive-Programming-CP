def zeroSwap(l,x,y):
    sum=0
    for i in l:
        sum+=i
        if(sum>=x and sum<=y):
            return True
        elif(sum>y):
            return False
    return False

for _ in range(int(input())):
    n,x,y=map(int,input().split())
    a=list(map(int,input().split()))
    if(zeroSwap(a,x,y)):
        print(0)
    else:
        temp=a.copy()
        f1=0
        for i in range(len(temp)):
            for j in range(i+1,len(temp)):
                tp=temp[i]
                temp[i]=temp[j]
                temp[j]=tp
                if(zeroSwap(temp,x,y)):
                    f1=1
                    break
                tp=temp[i]
                temp[i]=temp[j]
                temp[j]=tp
                
            if(f1==1):
                break
        if(f1==1):
            print(1)
        else:
            tempList1=[0]
            f2=0
            for i in range(len(a)):
                for j in list(tempList1):
                    sum=j+a[i]
                    if(sum>=x and sum<=y):
                        f2=1
                    if(sum<=y):
                        tempList1.append(sum)
                if(f2==1):
                    break
            if(f2==1):
                print(2)
            else:
                print(-1)


            
        

