def kk():
    h = input()
    r = input()
    p = input()

    hm = {}
    if len(h)+len(r)!=len(p):
        print('NO')
        return 

    for i in h:
        if i not in hm:
            hm[i]=1
        else:
            hm[i]+=1
    for i in r:
        if i not in hm:
            hm[i]=1
        else:
            hm[i]+=1
    fl = True
    for j in p:
        if j in hm and p.count(j)==hm[j]:
            continue
        else:
            fl = False
            break

    if fl:
        print('YES')
        return 
    else:
        print('NO')
        return 

kk()
