#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def count_unique_sticks(sticks):
    unique_sticks = set()

    for stick in sticks:
        unique_sticks.add(tuple(sorted(stick)))

    return len(unique_sticks)


# 入力の読み込み
N = int(input())
sticks = []

for _ in range(N):
    stick = input().strip()
    sticks.append(stick)

# 結果の出力
print(count_unique_sticks(sticks))
