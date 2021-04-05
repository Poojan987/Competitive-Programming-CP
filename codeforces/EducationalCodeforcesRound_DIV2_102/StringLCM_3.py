def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
 
# Function to return LCM of two numbers
def lcm(a,b):
    return (a / gcd(a,b))* b

def check(a,b):
    for i in range(min(len(a),len(b))):
        if(a[i]!=b[i]):
            return False
    return True
l=[1,2,3,4,5]
print(l)
print(*l)
for _ in range(int(input())):
    s=input()
    t=input()
    ans=-1
    a,b=len(s),len(t)
    lcmVal=lcm(a,b)
    
    
    c=1
    t1=s
    while(len(s)<lcmVal):
        s=t1*c
        c+=1
    t2=t
    c=0
    # print(s,t)
    while(len(t)<lcmVal):
        t=t2*c
        c+=1
    # print(s,t)
    if(s==t):
        ans=s
    print(ans)