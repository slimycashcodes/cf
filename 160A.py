n = int(input())
l = list(map(int,input().split()))

def check(l,n):

    l.sort()
    if n<=2:
        print(l.count(l[-1]))
        return


    for i in range(len(l)-1,0,-1):
        if sum(l[:i])<sum(l[i:]):
            print(len(l[i:]))
            return 


check(l,n)

