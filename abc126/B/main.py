import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

s = S()

first = int(s[:2])
second = int(s[2:4])

prefix = ""
suffix = ""
result = ""

def isMouth(n):
    return 1 <= n <= 12

# 月の範囲 1 - 12
if isMouth(first) or isMouth(second):
    if isMouth(first) and isMouth(second):
        print("AMBIGUOUS")
    elif isMouth(second):
        print("YYMM")
    else:
        print("MMYY")
else:
    print("NA")
