def f(la,lb,n):    
    for i in range(1,n+1):
        if (i not in la) and (i not in lb):
            print("Oh, my keyboard!")
            return
    print("I become the guy.")
    return 

n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
la = a[1:]
lb = b[1:]

f(la,lb,n)
