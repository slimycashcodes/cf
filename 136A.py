n=int(input())

l = list(map(int,input().split()))
al = [0]*(n)
for i in range(n):
    al[l[i]-1] = i+1


for i in al:
    print(i,end=' ')
