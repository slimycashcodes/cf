n = int(input())
sl=[]
for _ in range(n):
    sl.append(input())

l = ''
c=0
for i in sl:
    if l == '':
        l = i
    else:
        if l != i:
            l=i
            c+=1
print(c+1)
