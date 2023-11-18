#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def count_substrings_with_one_character(N, S):
    unique_substrings = set()

    last_char = ""
    duplicated_time = 1
    for i in range(N):
        current_char = S[i]

        # Add the current character as a substring
        unique_substrings.add(current_char)
        if last_char and last_char == current_char:
            duplicated_time+=1
            unique_substrings.add(last_char + str(duplicated_time))
        else:
            duplicated_time = 1
            last_char = current_char

    return len(unique_substrings)

# 入力の読み込み
N = int(input())
S = input()

# 結果の出力
result = count_substrings_with_one_character(N, S)
print(result)
