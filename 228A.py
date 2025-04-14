l = list(map(int,input().split()))
seen = []
c = 0

for i in l:
    if i not in seen:
        seen.append(i)
    else:
        c+=1
print(c)
