n,m,d=map(int,input().split())
matrix=[]
for i in range(n):
    matrix.append(list(map(int,input().split())))
l=[]
for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        l.append(matrix[i][j])
l.sort()
elem=l[int(len(l)/2)]
c=0
# print(elem)
# print(l)
for i in range(len(l)):
    if((elem-l[i])%d==0):
        if(elem-l[i]<0):
            c+=int(abs(elem-l[i])/d)
        else:
            c+=int((elem-l[i])/d)
    else:
        c=-1
        break
    
print(c)
    