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


def max_pyramid_size(N, A):
    # Initialize left and right arrays to store the maximum height of pyramid achievable from each side
    left = [0] * N
    right = [0] * N

    # Calculate the left maximum heights
    for i in range(N):
        if i == 0:
            left[i] = A[i]
        else:
            left[i] = min(A[i], left[i-1] + 1)

    # Calculate the right maximum heights
    for i in range(N-1, -1, -1):
        if i == N-1:
            right[i] = A[i]
        else:
            right[i] = min(A[i], right[i+1] + 1)

    # Calculate the maximum size of pyramid by taking the minimum of left and right heights at each index
    max_size = 0
    for i in range(N):
        max_size = max(max_size, min(left[i], right[i]))

    return max_size


N = I()
A = LI()

print(max_pyramid_size(N, A))
