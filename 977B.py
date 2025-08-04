def c(s):
    for i in range(len(s) - 1):
        yield s[i:i+2]  

n = int(input())
ss = input()

d = {}
for k in c(ss):
    d[k] = d.get(k, 0) + 1

print(max(d, key=d.get))
