N = int(input())
Ns = list(map(int, input().split()))
Ns.sort()
print(Ns[0]*Ns[-1])