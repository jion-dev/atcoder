#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def is_palindrome(s):
    lgth = len(s)
    for i in range(lgth//2):
        if s[lgth-1-i] != s[i]:
            return False
    return True

n = I()
letters = [S() for _ in range(n)]

can = False

for i in range(n):
    for j in range(n):
        if i == j:
            continue
        union = letters[i] + letters[j]
        if is_palindrome(union):
            can = True
            break

print("Yes" if can else "No")
