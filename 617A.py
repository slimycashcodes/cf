n=int(input())
c=0
for i in range(5,1,-1):
    if n==1:
        c+=1
        break
    if n>=i:
        c+=(n//i)
        n = n-(c*i)
    
    

print(c)

