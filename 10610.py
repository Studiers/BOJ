N = list(map(int, list(input())))
N.sort(reverse=True)
print(-1 if sum(N) % 3 is not 0 or not 0 in N else "".join(list(map(str, N))))