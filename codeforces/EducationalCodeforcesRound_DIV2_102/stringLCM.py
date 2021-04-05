for _ in range(int(input())):
    s=input()
    t=input()
    if(s==t):
        ans=s
    elif(len(s)<len(t)):
        t1,t2=s,t
        c=1
        while(t2!=t1 and len(t1)<len(t2)):
            t1=s*c
            c+=1
        if(t1==t2 ):
            ans=t
        else:
            t2=t*2
            while(t2!=t1 and len(t1)<len(t2)):
                    t1=s*c
                    c+=1
            if(t1==t2):
                ans=t*2
            else:
                ans=-1
    else:
        t1,t2=s,t
        c=1
        while(t2!=t1 and len(t2)<len(t1)):
            t2=t*c
            c+=1
        if(t1==t2 ):
            ans=s
        else:
            t1=s*2
            while(t2!=t1 and len(t2)<len(t1)):
                    t2=t*c
                    c+=1
            if(t1==t2):
                ans=s*2
            else:
                ans=-1
            
            
            
        
    print(ans)