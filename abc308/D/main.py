#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

H, W = MI()
rows = [S() for _ in range(H)]
G = [[] for _ in range(H)]
for i in range(H):
    for j in range(W):
        G[i].append(rows[i][j])

now_x, now_y = 0, 0
now = G[now_x][now_y]
if not (now == "s" or now == "n" or now == "u" or now == "k" or now == "e"):
    print("No")
    exit()

d = [[1, 0], [-1, 0], [0, 1], [0, -1]]
while not (now_x == H-1 and now_y == W-1):
    found = False
    for i in range(4):
        dx, dy = d[i]
        next_x, next_y = now_x + dx, now_y + dy
        if next_x < 0 or next_x >= H or next_y < 0 or next_y >= W:
            continue
        next = G[next_x][next_y]
        if now == "s" and next == "n":
            now_x, now_y = next_x, next_y
            now = next
            found = True
            break
        if now == "n" and next == "u":
            now_x, now_y = next_x, next_y
            now = next
            found = True
            break
        if now == "u" and next == "k":
            now_x, now_y = next_x, next_y
            now = next
            found = True
            break
        if now == "k" and next == "e":
            now_x, now_y = next_x, next_y
            now = next
            found = True
            break
        if now == "e" and next == "s":
            now_x, now_y = next_x, next_y
            now = next
            found = True
            break
    if not found:
      break


print("Yes" if now_x == H-1 and now_y == W-1 else "No")
