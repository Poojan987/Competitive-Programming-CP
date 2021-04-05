import bisect

primes = []
def SieveOfEratosthenes(n):
    prime = [True for i in range(n+1)]
    p = 2
    while(p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    c = 0
    for p in range(2, n):
        if prime[p]:
            primes.append(p)
            c += 1
    return c
c = SieveOfEratosthenes(50000)

for _ in range(int(input())):
    d = int(input())
    sum = 1
    ind = 0
    t2 = 1
    i1 = bisect.bisect_left(primes, d+1)
    sum = primes[i1]
    i2 = bisect.bisect_left(primes, sum+d)
    t2 = primes[i2]
    # for j in range(len(primes)):
    #     if(primes[j]-1>=d):
    #         sum=primes[j]
    #         ind=j
    #         break
    # for k in range(ind,len(primes)):
    #     if(primes[k]-sum>=d):
    #         t2=primes[k]
    #         break
    # print(t2,sum)
    print(sum*t2)
