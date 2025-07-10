n = (input())
ans = ''
c = 0

for i in n:
    if(int(i)>=5):
        if(c==0 and i=='9'):
            ans += '9'
            c+=1
            continue
        ans += str(9-int(i))
    else:
        ans += i
    c+=1
print(ans)
