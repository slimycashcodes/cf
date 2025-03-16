n, k = map(int, input().split())  
scores = list(map(int, input().split()))
kth_score = scores[k-1]
count = sum(1 for s in scores if s >= kth_score and s > 0)
print(count)
