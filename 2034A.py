import math
def lcm(l):
    a,b=l
    return abs(a*b) // math.gcd(a, b)

n=int(input())
for i in range(n):
    g=input()
    g=g.split()
    g=[int(i) for i in g]
    print(lcm(g))
