n = int(input())
l = list(map(int,input().split()))

hm = {0:0,1:0}

for i in l:
    if i < 0:
        hm[0] += 1
        if hm[1]>0:
            hm[1] -= 1
            hm[0] -= 1
    else:
        hm[1] += i

print(hm[0])
