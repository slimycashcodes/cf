def check(n):
    s = str(n)
    seen = []
    for i in s:
        if i in seen:
            return check(n+1)
        else:
            seen.append(i)
    return n
    
    
n = int(input())

print(check(n+1))
