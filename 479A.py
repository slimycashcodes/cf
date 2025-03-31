def f(l):
    a,b,c = l
    an = [a*b*c , a*(b+c),(a+b)*c,a+b+c]
    return max(an)    
l=[]
for _ in range(3):
    l.append(int(input()))

print(f(l))
    
