c,i,n = map(int, input().split())
cs=c*n*(n+1)//2
if cs<i:
    print(0)
else:
    print(cs-i)
