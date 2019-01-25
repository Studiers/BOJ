import sys
input = sys.stdin.readline
N = int(input())
plugs = [int(input())-1 for _ in range(N)]
print(sum(plugs) + 1)