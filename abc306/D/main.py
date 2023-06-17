#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n = I()
xy = [LI() for _ in range(n)]

poisons = []
potions = []

for i in range(n):
  x, y = xy[i]
  if x == 0:
    potions.append(y)
  else:
    poisons.append(y)

potions_size = len(potions)

poisons = sorted(poisons)
potions = sorted(potions)

is_broken = False
# 食べた料理の美味しさの総和として考えられる最大値
sum = 0

while not (is_broken and len(potions) == 0) or len(poisons):
  if not is_broken:
    max_poison = poisons.pop()
    if max_poison > 0:
      sum+=max_poison
      is_broken = True
  else:



# for i in range(n):
#   x, y = xy[i]
#   # 高橋くんが お腹を壊していない 時、
#   if not is_broken:
#     # 解毒剤入り の料理を食べても、高橋くんは お腹を壊していないまま である。
#     sum += y
#     # 毒入り の料理を食べると、高橋くんは お腹を壊す 。
#     if x == 1:
#       is_broken = True
#   # 高橋くんが お腹を壊している 時、
#   else:
#     # 解毒剤入り の料理を食べると、高橋くんは お腹を壊していない状態になる 。
#     if x == 0:

#     # 毒入り の料理を食べると、高橋くんは 死ぬ 。
