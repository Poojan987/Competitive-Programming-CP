for _ in range(int(input())):
    n=int(input())
    b=input()
    a=""
    sum=""
    for i in range(n):
        if(i==0):
            if(b[i]=='0'):
                a+='1'
                sum+='1'
                
            else:
                a+='1'
                sum+='2'
            
        else:
            if(sum[len(sum)-1]=='0' ):
                if(b[i]=='1'):
                    
                    sum+='2'
                else:
                    sum+='1'
                a+='1'
            elif( sum[len(sum)-1]=='1'):
                if(b[i]=='1'):
                    a+='1'
                    sum+='2'
                else:
                    a+='0'
                    sum+='0'
            else:
                if(b[i]=='1'):
                    a+='0'
                    sum+='1'
                else:
                    a+='1'
                    sum+='1'
    print(a)