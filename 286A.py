n = int(input())
h=[]
a=[]
c=0 

for _ in range(n):
    aw,b = map(int,input().split())
    h.append(aw)
    a.append(b)

for i in range(n):
    for j in range(n):
        if i!=j and h[i]==a[j]:
            c+=1


print(c)
