#! /usr/bin/env python
import bisect,collections,copy,heapq,itertools,math,string,queue
import sys
def I(): return int(input())
def MI(): return map(int,input().split())
def LI(): return list(map(int,input().split()))
def S(): return input()
def MS(): return input().split()
def LS(): return list(input().split())
dx = [-1, 1, 0, 0, -1, -1, 1, 1]
dy = [0, 0, -1, 1, -1, 1, -1, 1]
def is_valid(x, y, H, W): return 0 <= x < H and 0 <= y < W

# 以下dfs
# def find_sensor_groups(sensors):
#     H, W = len(sensors), len(sensors[0])
#     visited = [[False] * W for _ in range(H)]
#     sensor_groups = 0

#     for x in range(H):
#         for y in range(W):
#             if sensors[x][y] == "#" and not visited[x][y]:
#                 stack = [(x, y)]
#                 sensor_groups += 1

#                 while stack:
#                     cx, cy = stack.pop()
#                     visited[cx][cy] = True

#                     dx = [-1, 1, 0, 0, -1, -1, 1, 1]
#                     dy = [0, 0, -1, 1, -1, 1, -1, 1]

#                     for i in range(8):
#                         new_x, new_y = cx + dx[i], cy + dy[i]
#                         if is_valid(new_x, new_y, H, W) and sensors[new_x][new_y] == "#" and not visited[new_x][new_y]:
#                             stack.append((new_x, new_y))

#     return sensor_groups

# # 入力を受け取る
# H, W = map(int, input().split())
# sensors = [list(input()) for _ in range(H)]

# sensor_groups = find_sensor_groups(sensors)

# # センサグループの数を出力
# print(sensor_groups)

# 以下Union Find
class dsu():
    n=1
    parent_or_size=[-1 for i in range(n)]
    def __init__(self,N):
        self.n=N
        self.parent_or_size=[-1 for i in range(N)]
    def merge(self,a,b):
        assert 0<=a<self.n, "0<=a<n,a={0},n={1}".format(a,self.n)
        assert 0<=b<self.n, "0<=b<n,b={0},n={1}".format(b,self.n)
        x=self.leader(a)
        y=self.leader(b)
        if x==y:
            return x
        if (-self.parent_or_size[x]<-self.parent_or_size[y]):
            x,y=y,x
        self.parent_or_size[x]+=self.parent_or_size[y]
        self.parent_or_size[y]=x
        return x
    def same(self,a,b):
        assert 0<=a<self.n, "0<=a<n,a={0},n={1}".format(a,self.n)
        assert 0<=b<self.n, "0<=b<n,b={0},n={1}".format(b,self.n)
        return self.leader(a)==self.leader(b)
    def leader(self,a):
        assert 0<=a<self.n, "0<=a<n,a={0},n={1}".format(a,self.n)
        if (self.parent_or_size[a]<0):
            return a
        self.parent_or_size[a]=self.leader(self.parent_or_size[a])
        return self.parent_or_size[a]
    def size(self,a):
        assert 0<=a<self.n, "0<=a<n,a={0},n={1}".format(a,self.n)
        return -self.parent_or_size[self.leader(a)]
    def groups(self):
        leader_buf=[0 for i in range(self.n)]
        group_size=[0 for i in range(self.n)]
        for i in range(self.n):
            leader_buf[i]=self.leader(i)
            group_size[leader_buf[i]]+=1
        result=[[] for i in range(self.n)]
        for i in range(self.n):
            result[leader_buf[i]].append(i)
        result2=[]
        for i in range(self.n):
            if len(result[i])>0:
                result2.append(result[i])
        return result2

h, w = MI()
s = [list(input()) for _ in range(h)]

n = h*w
uf = dsu(n)
for i in range(h):
    for j in range(w):
        if s[i][j] != "#": continue
        for di in range(-1, 2):
          for dj in range(-1, 2):
            ni = i+di
            nj = j+dj
            if ni < 0 or ni >= h or nj < 0 or nj >= w: continue
            if s[ni][nj] != "#": continue
            if i == ni and j == nj: continue
            uf.merge(i*w+j, ni*w+nj)

ans = 0
for i in range(h):
    for j in range(w):
        if s[i][j] != "#": continue
        v = i*w+j
        if uf.leader(v) == v:
            ans+=1

print(ans)
