l=input().split('_')
validity=[]
for st in l:
    st=st.upper()
    valid=0
    if(len(st)>=8 and len(st)<=16):
        if(st.count('_')==0):
            # print(st,"hey")
            d={}
            temp="_"
            c=0
            f=0
            for i in range(len(st)-2):
                if(st[i]==st[i+2]):
                    c+=1
                if(c>1):
                    f=1
                    break
            if(f==0):
                valid=1

               
           
    
    validity.append(valid)
ind=len(l)-1
ans=0
for i in validity:
    ans+=pow(2,ind)*i
    ind-=1
print(ans)   
# print(validity)