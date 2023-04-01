import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

N, X = map(int, input().split())
A = LI()
A = set(A)

can = False

for a in A:
    if a+X in A:
        can =True
        break

print("Yes" if can else "No")
