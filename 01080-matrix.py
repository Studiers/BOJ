N, M = list(map(int, input().split()))
matrix = [ [ list(map(int, list(input()))) for _ in range(N) ] for _ in range(2) ]

cnt = 0

def change_matrix(y, x):
    for i in range(y, y + 3):
        for j in range(x, x + 3):
            matrix[0][i][j] = not matrix[0][i][j]

for i in range(N-2):
    for j in range(M-2):
        if matrix[0][i][j] != matrix[1][i][j]:
            cnt += 1
            change_matrix(i, j)

print ( cnt if matrix[0] == matrix[1] else -1 )
