def c(s,l):
    if s<s[::-1]:
        return 'YES'
    if l>=1 and min(s)!=max(s):
        return 'YES'
    return 'NO'

t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    s=input()
    print(c(s,k))
    
