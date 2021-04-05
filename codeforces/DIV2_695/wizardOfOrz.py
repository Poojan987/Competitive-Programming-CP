for _ in range(int(input())):
    n=int(input())
    s="9890"
    for i in range(4,n):
        last=int(s[len(s)-1])
        
        if(last+1!=10):
            s+=str(last+1)
        else:
            s+="0"
    # print(s)
    for i in range(0,n):
        print(s[i],end="")
    print()
        