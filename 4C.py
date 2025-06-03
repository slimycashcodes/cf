a=dict()
for _ in range(int(input())):
    s=input()
    if s not in a:
        a[s]=0
        print('OK')
    else:
        a[s]+=1
        print(s+str(a[s]))
       
