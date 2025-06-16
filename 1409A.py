n = int(input())
for _ in range(n):
    a,b = map(int,input().split())
    a = abs(a-b)
    print(a//10 + 1 if a%10!=0 else a//10)
                 
