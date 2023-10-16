#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def is_square(n):
    return int(n**0.5)**2 == n

N = int(input())
S = input()

# Sの文字列をリストに変換
S = list(S)

# 順列を生成
permutations = itertools.permutations(S)
ans_set = set()
for perm in permutations:
    num_str = ''.join(perm)
    num = int(num_str)
    if is_square(num):
        ans_set.add(num)

print(len(ans_set))
