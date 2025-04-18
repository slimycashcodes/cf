n = int(input())
l = [100,20,10,5,1]
i=0
c=0
while n>0:
    if l[i]<=n:
        d = n//l[i]
        c+=d
        n -= l[i]*d
    i+=1

print(c)
