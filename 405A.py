n = int(input())
l = list(map(int,input().split()))

for i in range(n):
    for j in range(i,n):
        if l[i]>l[j]:
            l[i],l[j] = l[j],l[i]

for i in range(n):
    print(l[i],end=' ')
    
