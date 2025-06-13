n , l = map(int,input().split())
d = list(map(int,input().split()))
d.sort()
md = 0 
il = d[0]
fl = l-d[-1]
for i in range(n-1):
        md = max(md,abs(d[i]-d[i+1]))

md /= 2
md = max(il,fl,md)
print(md)
