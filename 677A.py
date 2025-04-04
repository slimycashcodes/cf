def f(n,m,l):
    c = 0
    for i in l:
        if i > m:
            c+=1
        c+=1
    return c

n,m = map(int,input().split())
l=list(map(int,input().split()))
print(f(n,m,l))


