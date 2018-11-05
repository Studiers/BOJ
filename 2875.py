N, M, K, cnt = list(map(int, input().split())) + [0,]
while N + M >= K + 3 and N >= 2 and M >= 1: N, M, cnt = N - 2, M - 1, cnt + 1
print(cnt)