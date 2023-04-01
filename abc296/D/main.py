import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

N, M = map(int, input().split())

INF = math.inf
x = INF

for a in range(1, N+1):
    b = (M+a-1)//a
    if (b <= N):
        x = min(x, a*b)
    # √M < a <= b により、aがbより大きい場合は考えなくて良い
    if (a > b):
        break

if x == INF:
    print(-1)
else:
    print(x)
