n = int(input())
for i in range(n):
    li = list(map(int, input().split()))
    md = 0
    if li.count(li[0]) == 4:
        print("YES")
    else:
        print("NO")
            
