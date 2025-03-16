for i in range(5):
    l=list(map(int,input().split()))
    if 1 in l:
        print(abs(2-i)+abs(2-l.index(1)))
        break
