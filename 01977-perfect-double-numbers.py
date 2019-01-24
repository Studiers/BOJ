numbers = [i**2 for i in range(1, 101)]
M, N = int(input()), int(input())

l = list()

print(numbers)
for x in range(M, N + 1):
    print(x)
    if x in numbers:
        l.append(x)

if len(l) == 0:
    print(-1)
else:
    print(sum(l),min(l),sep="\n")