s, n = map(int, input().split())
l = []
for i in range(n):
    x, y = map(int, input().split())
    l.append([x, y])


l.sort(key=lambda dragon: dragon[0])


for i in range(n):
    if s <= l[i][0]:
        print("NO")
        exit()  
    else:
        s += l[i][1]

print("YES")
