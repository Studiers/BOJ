counts = [0, 0, 0]

N = int(input())
arr = [list(map(int, input().split(' '))) for _ in range(N)]

def r(x, y, offset):
    CELL = arr[y][x]

    try:
        for i in range(x, x+offset):
            for j in range(y, y+offset):
                if arr[j][i] != CELL:
                    raise Exception
        
        counts[CELL+1] += 1
    except:
        for i in range(3):
            for j in range(3):
                r(x + offset//3*i, y + offset//3*j, offset//3)

r(0, 0, N)

print(*counts, sep='\n')