n = int(input())

for _ in range(n):
    nn = int(input())
    c = 0 
    l = []
    while nn>0:
        d = (nn%10)*(10**c)
        if d != 0:
            l.append(d)
        c+=1
        nn//=10
    print(len(l))
    for i in l:
        print(i,end=' ')


