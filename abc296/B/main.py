import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = 8
s_arr = [""] * n
for i in range(n):
    s_arr[i] = S()

col = ["a", "b", "c", "d", "e", "f", "g", "h"]
row = [1, 2, 3, 4, 5, 6, 7, 8]
row.reverse()

for i in range(8):
    for j in range(8):
      if s_arr[i][j] == "*":
        print(col[j]+str(row[i]))
