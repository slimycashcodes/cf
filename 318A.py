t,p = map(int,input().split())
if t%2 == 0:
    n = t//2
else:
    n = (t//2) + 1

if p<=n:
    print(1+(p-1)*2)
else:
    print(2+(p-n-1)*2)

