#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import re
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

n = I()
s = S()

stack = collections.deque()

for i in range(n):
    if stack and s[i] == ")":
        to_delete = collections.deque()
        can_delete = False
        while stack:
            item = stack.pop()
            to_delete.appendleft(item)
            if item == "(":
                can_delete = True
                break
        if not can_delete:
            stack =to_delete
            stack.append(s[i])
    else:
        # print(i, stack)
        stack.append(s[i])

print("".join(stack))
