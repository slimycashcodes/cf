n , m = map(int,input().split())
l = list(map(int,input().split()))

l.sort()
s = 0
e = n-1
ma = sum(l)

while e < m:

    d = l[e]-l[s]
    ma = min(ma,d)
    s += 1
    e += 1

print(ma)
