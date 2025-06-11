n , k = map(int,input().split())
rt = 240 - k
p = 1


for i in range(n):
    if rt >= p*5:
        rt -= p*5
        p += 1
    else:
        break
print(p-1)
