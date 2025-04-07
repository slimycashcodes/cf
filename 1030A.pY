def check(seq):
    for i in seq:
        if i==1:
            return 'HARD'
    return 'EASY'


n=int(input())
seq = list(map(int,input().split()))
print(check(seq))

