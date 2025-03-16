from math import ceil 
s=input()
s=s.split()
n,m,a=s
n,m,a=int(n),int(m),int(a)
no=ceil(n/a)*ceil(m/a)
print(no)
