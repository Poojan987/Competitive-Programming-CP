for _ in range(int(input())):
    n = int(input())
    l = []
    lsct = ['a', 'b', 'c', 'd', 'e']
    tps = {i:[] for i in lsct}
    for i in range(n):
        tp = input()
        l.append(tp)
        dp = {i:0 for i in lsct}
        for j in tp:
            if(j in dp):
                dp[j]+=1
            else:
                dp[j]=1
        for sd in lsct:
            tps[sd].append(dp[sd]-(len(tp)-dp[sd]))
    ans = 0
    # print(tps)
    for sd in lsct:
        tps[sd].sort(reverse=True)
        kp = 0
        lp = 0
        for j in tps[sd]:
            if (kp+j)>0:
                kp+=j
                lp+=1
        ans = max(ans, lp)
        
    print(ans)
