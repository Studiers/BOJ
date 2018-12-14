input()
l = list(map(int, input().split(' ')))

def get_sum(xl):
    ssum = 0
    for i in range(1, len(xl) + 1):
        ssum += sum(xl[:i])
    return ssum

l.sort()
print(get_sum(l))