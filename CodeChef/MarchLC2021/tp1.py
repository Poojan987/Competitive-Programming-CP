for _ in range(int(input())):
    r, c, x = map(int, input().split())
    a = list()
    b = list()
    for i in range(r):
        temp = list(map(int, input().split()))
        a.append(temp)
    for i in range(r):
        temp = list(map(int, input().split()))
        b.append(temp)
    rgreater = r >= x 
    cgreater = c >= x
    for i in range(r): 
        if not cgreater:
            break
        for j in range(c-x+1):
            if not (a[i][j] == b[i][j]):
                diff = b[i][j] - a[i][j]
                a[i][j]+=diff
                for k in range(1, x):
                    a[i][j+k] += diff
    for i in range(c):
        if not rgreater:
            break
        for j in range(r-x+1):
            if not (a[j][i] == b[j][i]):
                diff = b[j][i] - a[j][i]
                a[j][i] += diff 
                for k in range(1, x):
                    a[j+k][i] += diff
    if a == b:
        print("Yes")
    else:
        print("No")        
        