import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())


N = I()
S = S()

ans = True
before = S[0]
for i in range(1, len(S)):
    if S[i] == before:
        ans = False
        break
    before = S[i]

print("Yes" if ans else "No")
