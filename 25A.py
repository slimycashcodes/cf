n = int(input())
l = list(map(int,input().split()))


le = [i for i in l if i%2==0]
lo = [i for i in l if i%2!=0]


if len(le)==1:
    print(l.index(le[0])+1)
else:
    print(l.index(lo[0])+1)

