n=int(input())
c = 0
m = 0
for _ in range(n):
    b,a = map(int,input().split())
    c += a
    c -= b
    m = max(c,m)

print(m)



