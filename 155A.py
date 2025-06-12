n = int(input())
l = list(map(int, input().split()))

nl = []
c = 0

for i in l:
    if nl:
        if (i > max(nl)) or (i < min(nl)):
            c += 1
    nl.append(i)

print(c)
