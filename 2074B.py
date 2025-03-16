n = int(input())
for i in range(n):
    nn = int(input())
    li = list(map(int, input().split()))
    print(sum(li) - nn+1)
            
