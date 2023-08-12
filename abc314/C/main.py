#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N, M = MI()
s = S()
Cs = LI()

# 各色ごとにインデックスを保存
color_indices = collections.defaultdict(list)
for i in range(N):
    color_indices[Cs[i]].append(i)

# 色ごとに文字列を分ける
color_strings = [''] * (M + 1)
for i in range(N):
    color_strings[Cs[i]] += s[i]

# 各色ごとに巡回シフトを行う
ans_list = ["" for _ in range(N)]
for i in range(1, M + 1):
    color_index = color_indices[i]
    shifted_string = color_strings[i][-1] + color_strings[i][:-1]
    for index in color_index:
        ans_list[index] = shifted_string[0]
        shifted_string = shifted_string[1:]

print("".join(ans_list))
