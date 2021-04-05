import bisect

# primes = []
# d={}
# def SieveOfEratosthenes(n):
#     prime = [True for i in range(n+1)]
#     p = 2
#     while(p * p <= n):
#         if (prime[p] == True):
#             for i in range(p * p, n + 1, p):
#                 prime[i] = False
#         p += 1
#     c = 0
#     for p in range(2, n):
#         if prime[p]:
#             # primes.append(p)
#             # if(p not in primes):
#             d[p]=1
#             c += 1
#     return c
# c = SieveOfEratosthenes(1e14)

for _ in range(int(input())):
    n=int(input())
    if(n%2!=0):
        print("YES")
    else:
        while(n%2==0):
            n=n//2
        if(n==1):
            print("NO")
        else:
            print("YES")
        # if(n not in )
