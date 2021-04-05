import math
import numpy as np
for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l=set()
    temp1,temp2,temp3=set(),set(),set()
    l.add(0)
    temp1.add(0)
    
    while(len(temp1)>0):
        temp=set()

        for i in range(len(a)):
            for element in  list(temp1):
                var=a[i]|element
                if(var not in l):
                    temp.add(var)   
                    l.add(var)
                # else:
                # l.add(a[i]|element)
                # temp1.add(a[i]|element)
        for i in range(len(b)):
            for element in  list(temp1):
                var=b[i]&element
                if(var not in l):
                    temp.add(var)   
                    l.add(var)
                
                # l.add(b[i]&element)
                # temp1.add(b[i]&element)
        temp1=temp
    # print(l)
    print(len(l))