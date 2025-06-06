s = input()
l = s.lower()
u = s.upper()
c = u[:1]+l[1:]

if (s == l[:1]+u[1:]):
    print(c)
elif s==u:
    print(l)
else:
    print(s)
