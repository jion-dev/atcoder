#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def max_continuous_free_days(D, schedules):
    max_free_days = 0

    for start_day in range(D):
        for end_day in range(start_day, D):
            all_free = True
            for person_schedule in schedules:
                if 'x' in person_schedule[start_day:end_day+1]:
                    all_free = False
                    break
            if all_free:
                max_free_days = max(max_free_days, end_day - start_day + 1)

    return max_free_days

N, D = MI()
schedules = []
for _ in range(N):
    schedule = input().strip()
    schedules.append(schedule)

result = max_continuous_free_days(D, schedules)
print(result)
