#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N = int(input())

# 面積Sを初期化
S = 0

# 各シートの座標範囲をリストに格納
sheets = []
for _ in range(N):
    A, B, C, D = map(int, input().split())
    sheets.append((A, B, C, D))

# 全てのシートの面積を計算
for i in range(N):
    width = sheets[i][1] - sheets[i][0]
    height = sheets[i][3] - sheets[i][2]
    S += width * height

# 重複している部分の面積を引く
for i in range(N):
    for j in range(i + 1, N):
        overlap_x = max(0, min(sheets[i][1], sheets[j][1]) - max(sheets[i][0], sheets[j][0]))
        overlap_y = max(0, min(sheets[i][3], sheets[j][3]) - max(sheets[i][2], sheets[j][2]))
        overlap_area = overlap_x * overlap_y
        S -= overlap_area

# 全てのシートが重なる部分の面積を足す
for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            overlap_x = max(0, min(sheets[i][1], min(sheets[j][1], sheets[k][1])) - max(sheets[i][0], max(sheets[j][0], sheets[k][0])))
            overlap_y = max(0, min(sheets[i][3], min(sheets[j][3], sheets[k][3])) - max(sheets[i][2], max(sheets[j][2], sheets[k][2])))
            overlap_area = overlap_x * overlap_y
            S += overlap_area

# Sを整数形式で出力
print(S)
