n=int(input())
l=list(map(int,(input().split())))
start,end=0,len(l)-1
s1,s2=0,0
c=0
while(start<=end):
    # print(l[start],l[end])
    # print("s1,s2=",s1,s2)
    if(l[start]>l[end]):
        if(c%2==0):
            s1+=l[start]
        else:
            s2+=l[start]
        start+=1
    else:
        if(c%2==0):
            s1+=l[end]
        else:
            s2+=l[end]
        end-=1
    c+=1
print(s1,s2)