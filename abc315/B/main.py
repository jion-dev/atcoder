#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

# M = I()
# Ds = LI()
# deque_ds = collections.deque(Ds)

# all_day_count = sum(Ds)
# mid_day = (all_day_count + 1) // 2

# a = 1

# popped = deque_ds.popleft()

# for i in range(mid_day):
#     if i == popped:
#         if mid_day >= popped + deque_ds[0]:
#           popped += deque_ds.popleft()
#         a+=1


# b = popped if mid_day == popped else mid_day - popped
# print(a, b)

def find_middle_day(M, D):
    total_days = sum(D)  # 月ごとの日数の合計
    middle_day = (total_days + 1) // 2  # 真ん中の日

    current_month = 1
    current_day = 1
    for i in range(M):
        if current_day + D[i] - 1 >= middle_day:  # 真ん中の日がこの月に含まれるか判定
            current_month = i + 1
            current_day = middle_day - (current_day - 1)
            break
        current_day += D[i]

    return current_month, current_day

# 入力の読み込み
M = int(input())
D = list(map(int, input().split()))

# 真ん中の日の月と日を求める
middle_month, middle_day = find_middle_day(M, D)

# 結果を出力
print(middle_month, middle_day)
