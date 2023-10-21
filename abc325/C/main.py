#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())

def is_valid(x, y, H, W):
    return 0 <= x < H and 0 <= y < W

def find_sensor_groups(sensors):
    H, W = len(sensors), len(sensors[0])
    visited = [[False] * W for _ in range(H)]
    sensor_groups = 0

    for x in range(H):
        for y in range(W):
            if sensors[x][y] == "#" and not visited[x][y]:
                stack = [(x, y)]
                sensor_groups += 1

                while stack:
                    cx, cy = stack.pop()
                    visited[cx][cy] = True

                    dx = [-1, 1, 0, 0, -1, -1, 1, 1]
                    dy = [0, 0, -1, 1, -1, 1, -1, 1]

                    for i in range(8):
                        new_x, new_y = cx + dx[i], cy + dy[i]
                        if is_valid(new_x, new_y, H, W) and sensors[new_x][new_y] == "#" and not visited[new_x][new_y]:
                            stack.append((new_x, new_y))

    return sensor_groups

# 入力を受け取る
H, W = map(int, input().split())
sensors = [list(input()) for _ in range(H)]

sensor_groups = find_sensor_groups(sensors)

# センサグループの数を出力
print(sensor_groups)
