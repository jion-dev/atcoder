#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def check_compatibility(products):
    for i in range(len(products)):
        for j in range(len(products)):
            if i == j:
                continue

            # 条件1: Pi >= Pj
            if products[i][0] < products[j][0]:
                continue

            # 条件2: j番目の製品はi番目の製品がもつ機能をすべてもつ
            if not set(products[j][2:]).issuperset(set(products[i][2:])):
                continue

            # 条件3: Pi > Pj または j番目の製品はi番目の製品にない機能を1つ以上もつ
            if products[i][0] > products[j][0] or set(products[j][2:]).difference(set(products[i][2:])):
                return "Yes"

    return "No"


# 入力の読み込み
N, M = map(int, input().split())
products = []

for _ in range(N):
    product = list(map(int, input().split()))
    products.append(product)

# 結果の出力
print(check_compatibility(products))
