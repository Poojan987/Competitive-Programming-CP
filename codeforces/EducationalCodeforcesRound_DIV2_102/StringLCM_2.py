def check(a,b):
    for i in range(min(len(a),len(b))):
        if(a[i]!=b[i]):
            return False
    return True

for _ in range(int(input())):
    s=input()
    t=input()
    ans=-1
    if(not check(s,t)):
        ans=-1 
        continue
    if(s==t):
        ans=s
    elif(len(s)<len(t)):
        
        t1,t2=s,t
        c=1
        g=1
        while(check(t1,t2)):
            t2=t*g
            
            while(t2!=t1 and len(t1)<len(t2)):
                t1=s*c
                c+=1
            if(t1==t2):
                ans=t2
                break
            g+=1
        
    else:
        t1,t2=s,t
        c=1
        g=1

        while(check(t1,t2)):
            t1=s*g
            
            while(t2!=t1 and len(t2)<len(t1)):
                t2=t*c
                c+=1
            # print(t1,t2)
            if(t1==t2):
                ans=t1
                break
            g+=1
            
        



       
    
       
            
            
            
        
    print(ans)