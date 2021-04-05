for _ in range(int(input())):
    x=int(input())
    l=[]
    c=9
    p=0
    sum=0
    while(x>0 and c!=0):
        
        if(x>c):
            sum+=c*pow(10,p)
        else:
            sum+=(x)*pow(10,p)
            
        p+=1
        x-=c
        c-=1
    if(x>0):
        print(-1)
    else:
        print(sum)
    
