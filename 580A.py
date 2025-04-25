n = int(input())
l = list(map(int,input().split()))
c = 0
m = 0


for i in range(len(l)):
    if c==0:
        p = l[0]
        c+=1
    elif l[i]>=p:
        c+=1
        p = l[i]
    else:
        m = max(m,c)
        c = 1
        p = l[i]
m=max(m,c)
print(m)
