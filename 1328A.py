n = int(input())
re = []
for _ in range(n):
    a,b = map(int,input().split())
    if a%b==0:
        re.append(0)
        continue
    g = (a//b)+1
    re.append(g*b-a) 



for i in re:
    print(i)
