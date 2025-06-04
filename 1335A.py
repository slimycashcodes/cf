n = int(input())

def s(t):
    return t//2 if t%2!=0 else t//2-1

for _ in range(n):
    print(s(int(input())))
