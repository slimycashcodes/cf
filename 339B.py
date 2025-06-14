n,m = map(int,input().split())
l = list(map(int,input().split()))

t = 0
c = 1

for i in l:
    if i>=c:
        t += i - c
    else:
        t += n - c + i
    c = i
print(t)
