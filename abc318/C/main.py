#! /usr/bin/env python
import bisect, collections, copy, heapq, itertools, math, string, queue
import sys


def I():
    return int(input())


def MI():
    return map(int, input().split())


def LI():
    return list(map(int, input().split()))


def S():
    return input()


def MS():
    return input().split()


def LS():
    return list(input().split())


N, D, P = MI()
F = LI()
F.sort()
s = [0 for _ in range(N)]
s[0] = F[0]
for i in range(N - 1):
    s[i + 1] = s[i] + F[i + 1]

k = (N + D - 1) // D
ans = P * k
for i in range(k):
    ans = min(ans, s[N - 1 - (i * D)] + (P * i))

print(ans)
