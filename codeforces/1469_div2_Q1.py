for _ in range(int(input())):
    s=input()
    b1,q,b2=0,0,0
    ans="yes"
    for i in range(len(s)):
        if(b1<0):
            ans="no"
            break
        if(s[i]=='('):
            b1+=1
        elif(s[i]==')'):
            b1-=1
        else:
            if(b1>0):
                b1-=1
            else:
                b1+=1
    if(b1>0 or b1<0 or len(s)%2!=0):
        ans="no"
    
    print(ans)