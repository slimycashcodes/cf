def f(n):
    c = 0
    s= str(n)
    
    l = [4,7,47,74,444,447,474,477,744,747,774,777]
    for i in l:
        if n%i==0:
            return True
    
    return False


n= int(input())
if f(n):
    print('YES')
else:
    print('NO')
