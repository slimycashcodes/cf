n = input()
m = input()
r=[0]*len(n)
for i in range(len(n)):
    if (n[i]!=m[i]):
        r[i]='1'
    else:
        r[i]='0'

print(''.join(r))
