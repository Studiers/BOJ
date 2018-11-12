n = int(input())

output = []
def f(n, _from, _to, _for):
        if n is 0: return 1
        s=0
        s += f(n-1, _from, _for, _to)
        output.append(f"{_from} {_to}")
        s += f(n-1, _for, _to, _from)
        return s

print(f(n, '1', '3', '2') - 1)
print("\n".join(output))