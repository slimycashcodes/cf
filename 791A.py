b,s = map(int,input().split())
c=0
while b<=s:
    b*=3
    s*=2
    c+=1
print(c)
