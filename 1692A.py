n = int(input())
for _ in range(n):
    l = list(map(int,input().split()))
    c = 0
    for i in l:
        if i>l[0]:
            c+=1

    print(c)
    
