n = input()
c = 1
m = 1

for i in range(1, len(n)):
    if n[i] == n[i - 1]:
        c += 1
        m = max(m, c)
    else:
        c = 1

    if m >= 7:
        print("YES")
        break
else:
    print("NO")
