n = int(input())
for _ in range(n):
    a,b,c = map(int,input().split())
    if c == a+b:
        print('+')
    else:
        print('-')
