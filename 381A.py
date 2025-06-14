n = int(input())
l = list(map(int,input().split()))

s = 0
d = 0

t = 1

while l:
    if l[-1]>l[0]:
        if t%2 ==0:
            d += l[-1]
            del l[-1]
        else:
            s += l[-1]
            del l[-1]
    else:
        if t%2 ==0:
            d += l[0]
            del l[0]
        else:
            s += l[0]
            del l[0]
    t+=1
        
print(s,d)
