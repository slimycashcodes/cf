a=int(input())
c=0
for i in range(a):
    d=input()
    if d.count('1')>=2:
        c+=1
print(c)
