n = int(input())

for _ in range(n):
    s = input().split()
    ns = ''
    for i in s:
        ns += i[0]
    print(ns)


