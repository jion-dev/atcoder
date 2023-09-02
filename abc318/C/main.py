#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

N, D, P = MI()
F = LI()
F.sort(reverse=True)
# DPテーブルを初期化
dp = [float('inf')] * (N + 1)
dp[0] = 0

# DPを用いて最小金額を計算
for i in range(1, N + 1):
    # i日目に1日券を購入しない場合
    dp[i] = min(dp[i], dp[i - 1] + F[i - 1])

    # i日目に1日券を購入する場合
    for j in range(1, D + 1):
        if i - j >= 0:
            dp[i] = min(dp[i], dp[i - j] + P)

# 答えはN日目までのDPテーブルの最後の値
print(dp[N])
# F.sort(reverse=True)
# p_per_pass = P//D

# pass_cnt = 0
# can = True
# temp = 0
# while can and temp < N:
#     p = F[temp]
#     if p <= p_per_pass:
#         can=False
#         break
#     if (temp+1)%D==0:
#         pass_cnt+=1
#     temp+=1

# if can and temp == N:
#     pass_cnt+=1

# s = 0
# if pass_cnt:
#     for i in range(D*pass_cnt):
#       if i < N:
#         F[i] = 0
#     s = P*pass_cnt + sum(F)
# else:
#     s = sum(F)

# print(s)
