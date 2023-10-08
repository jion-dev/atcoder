N = 4

def convertToSetAndShift(X, dy, dx):
    res = set()
    for i in range(N):
        for j in range(N):
            if X[i][j] == "#":
                res.add((i + dy, j + dx))
    return res


def normalize(S):
    minx = min(S, key=lambda x: x[0])[0]
    miny = min(S, key=lambda x: x[1])[1]
    return set((x - minx, y - miny) for x, y in S)

def rotate(X):
    return list(zip(*X[::-1]))


A = [input() for _ in range(N)]
B = [input() for _ in range(N)]
C = [input() for _ in range(N)]

## ますの合計数が合わないなら終了
if sum(r.count("#") for r in A + B + C) != N * N:
    print("No")
    exit()

target = set()
for i in range(N):
    for j in range(N):
        target.add((i, j))

ans = False
for rotB in range(4):
    for rotC in range(4):
        for dyB in range(-N + 1, N):
            for dxB in range(-N + 1, N):
                for dyC in range(-N + 1, N):
                    for dxC in range(-N + 1, N):
                        setA = convertToSetAndShift(A, 0, 0)
                        setB = convertToSetAndShift(B, dyB, dxB)
                        setC = convertToSetAndShift(C, dyC, dxC)
                        ans |= normalize(setA | setB | setC) == target
        C = rotate(C)
    B = rotate(B)
print("Yes" if ans else "No")
