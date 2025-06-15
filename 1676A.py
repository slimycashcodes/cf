n = int(input())

for _ in range(n):
    s = input()
    fs = 0
    es = 0
    for i in range(6):
        if i < 3:
            fs += int(s[i])
        else:
            es += int(s[i])
    print("YES" if fs==es else "NO")
    
