#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

# N 個の拠点の数を入力
N = I()

# 各拠点の情報を受け取り、拠点ごとの時間帯をリストに格納
offices = []
for _ in range(N):
    W, X = MI()
    offices.append((W, X))

# 初期化：会議の時間帯、参加可能社員数
max_attendance = 0

# 世界標準時の 0 時から 23 時までの時間帯について総当たり
for start_time in range(24):
    end_time = (start_time + 1) % 24  # 1 時間後の時間帯
    attendance = 0
    start_time

    # 各拠点について、会議の時間帯内にいる社員数を計算
    for office in offices:
        W, X = office

        start_timeX = (start_time + X) % 24
        end_timeX = (end_time + X) % 24
        if (start_timeX >= 9 and start_timeX < 18 and end_timeX > 9 and end_timeX <= 18):
            # 会議の時間帯内にいる社員数を加算
            attendance += W

    # より多くの社員が参加できる時間帯が見つかれば更新
    if attendance > max_attendance:
        max_attendance = attendance

# 結果を出力
print(max_attendance)
