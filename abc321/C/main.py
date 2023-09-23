#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def generate_321_like_numbers(K):
    # 初期化
    queue = collections.deque()
    for i in range(9):
      queue.appendleft(i+1) # 1~9は必ず321-likeNumberなので、キューに追加
    count = 0

    while True:
        # キューから次の321-likeNumberを取得
        current = queue.pop()
        count += 1

        # K番目の321-likeNumberに到達した場合、それを返す
        if count == K:
            return current

        # currentの最後の桁を取得
        last_digit = current % 10

        # last_digitより小さい数字を1つずつ追加して新たな321-likeNumberを生成
        for i in range(last_digit):
            new_number = current * 10 + i
            queue.appendleft(new_number)

# 入力を受け取る
K = int(input())

# K番目の321-likeNumberを求めて出力
result = generate_321_like_numbers(K)
print(result)



# TLE
# def is_321_like_number(x):
#     # xの各桁を上から見て狭義単調減少かどうかをチェック
#     x_str = str(x)
#     for i in range(1, len(x_str)):
#         if x_str[i - 1] <= x_str[i]:
#             return False
#     return True

# def find_kth_321_like_number(K):
#     count = 0
#     current = 1

#     while True:
#         if is_321_like_number(current):
#             count += 1
#             if count == K:
#                 return current
#         current += 1

# # 入力を受け取る
# K = int(input())

# # K番目の321-likeNumberを求めて出力
# result = find_kth_321_like_number(K)
# print(result)
