r , c = map(int,input().split())

for i in range(r):
    for j in range(c):
        if (i%2!=0):
            if ((i//2)%2==0) :
                if (j!=c-1):
                    print(".",end='')
                else:
                    print("#",end='')
            else:
                if j!=0:
                    print(".",end='')
                else:
                    print("#",end='')
            
        else:
            print('#',end='')
    print()

