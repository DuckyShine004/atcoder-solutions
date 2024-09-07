import sys
from collections import deque

input = sys.stdin.readline

N, K = map(int, input().split())
R = list(map(int, input().split()))
res = []


def dfs(i, s):
    if i == N:
        if sum(s) % K == 0:
            res.append(s.copy())
        return
    for x in range(1, R[i] + 1):
        s.append(x)
        dfs(i + 1, s)
        s.pop()


dfs(0, deque())

for arr in res:
    for x in arr:
        print(x, end=" ")
    print()
