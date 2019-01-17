a, b = input().split()

diff = len(b) - len(a)

def get_diff(a, b):
    return sum(map(lambda x: int(x[0] != x[1]), zip(a, b)))

min_diff = 51
for i in range(diff+1):
    min_diff = min(min_diff, get_diff(b[:i] + a + b[len(b)-(diff-i):], b))

print(min_diff)