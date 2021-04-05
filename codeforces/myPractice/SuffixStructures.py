s=input()
t=input()
ans="need tree"
if(len(s)>=len(t)):
    sD,tD={},{}
    for i in s:
        
        if(i not in sD):
            sD[i]=0
        sD[i]+=1
    for i in t:
        if(i not in tD):
            tD[i]=0
        tD[i]+=1
    f=0
    for key,value in tD.items():
        if(key not in sD):
            f=1
            break
        if(sD[key]<value):
            f=1
            break
    if(f!=1):
        
        if(len(s)==len(t)):
            ans="array"
        elif(s.find(t)!=-1):
            ans="automaton"
        else:
            ans="automaton"
            ind=s.find(t[0])
            if(ind!=-1):
                for i in range(1,len(t)):
                    ind=s.find(t[i],ind+1)
                    if(ind==-1):
                        ans="both"
                        break
            else:
                ans="both"
print(ans)
