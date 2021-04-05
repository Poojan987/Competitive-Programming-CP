for _ in range(int(input())):
    s=input()
    b1,q,b2=0,0,0
    ans="yes"
    for i in s:
        if(i=='?'):
            b2+=1
    if(s[0]==')' or s[len(s)-1]=='(' or b2%2!=0):
        ans="no"

    

    
    print(ans)