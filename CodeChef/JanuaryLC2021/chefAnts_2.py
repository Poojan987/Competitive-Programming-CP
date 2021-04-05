for _ in range(int(input())):
    n=int(input())
    l=[]
    d={}
    sum=0
    uniPos,uniNeg={},{}
    for i in range(n):
        neg,pos=0,0    
        nList,pList=[],[]
        l=list(map(int,input().split()))
        for j in range(1,len(l)):
            if(l[j]>0):
                pos+=1
                pList.append(l[j])

            else:
                neg+=1
                nList.append((l[j]))
            if(abs(l[j]) not in d):
                d[abs(l[j])]=0
            d[abs(l[j])]+=1
        pList.sort(reverse=True)
        uniPos[i]=pList
        uniNeg[i]=nList
    for i in d:
        if(d[i]>1):
            sum+=1
    for i in range(n):
        # print(uniPos[i],uniNeg[i])
        while(True):
            closest=0
            if(len(uniNeg[i])==0 and len(uniPos[i])==0):
                break
            elif(len(uniNeg[i])==0):
                closest=uniPos[i].pop()
            elif(len(uniPos[i])==0):
                closest=uniNeg[i].pop()
            else:
                a,b=uniNeg[i].pop(),uniPos[i].pop()
                if(abs(a)>b):
                    closest=b
                    uniNeg[i].append(a)
                else:
                    closest=a
                    uniPos[i].append(b)
            if(closest<0):
                if(d[abs(closest)]>1):
                    sum+=len(uniNeg[i])
                else:
                    sum+=len(uniPos[i])
            else:
                if(d[abs(closest)]>1):
                    sum+=len(uniPos[i])
                else:
                    sum+=len(uniNeg[i])

        # sum+=(neg*pos)

    print(sum)
