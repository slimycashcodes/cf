x=[]
y=[]
z=[]

n=int(input())
for i in range(n):
    l = list(map(int, input().split()))

    x.append(l[0])
    y.append(l[1])
    z.append(l[2])

if sum(x)==0 and sum(y)==0 and sum(z)==0:
    print("YES")
else:
    print("NO")
