for _ in range(int(input())):
    l=list(map(int,input().split()))
    a,b=l[0],l[1]
    if(l[2]%2!=0):

        print(a*(int(l[2]/2)+1)-b*(int((l[2]/2))))
    else:
        print(a*(int(l[2]/2))-b*(int((l[2]/2))))