#! /usr/bin/env python
import bisect
import collections
import copy
import heapq
import itertools
import math
import string
import queue
import sys
def I(): return int(input())
def MI(): return map(int, input().split())
def LI(): return list(map(int, input().split()))
def St(): return input()
def MS(): return input().split()
def LS(): return list(input().split())


def find_nth_sum_of_three_repunits(N):
    sums = []
    max_length = 1

    while len(sums) < N:
        sums.clear()

        repunits = [int('1' * i) for i in range(1, max_length + 1)]

        for i in range(len(repunits)):
            for j in range(i, len(repunits)):
                for k in range(j, len(repunits)):
                    sums.append(repunits[i] + repunits[j] + repunits[k])

        sums = sorted(list(set(sums)))

        max_length += 1

    return sums[N - 1]


N = I()
print(find_nth_sum_of_three_repunits(N))
