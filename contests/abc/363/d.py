import sys
import math

input = sys.stdin.readline
N = int(input().strip())


def solve():
    d = t = cur = 1
    while True:
        k = 9 * t
        if cur + k >= N:
            break
        cur += k
        if not (d & 1):
            t *= 10
        d += 1

    rem = N - cur - 1
    # print(d, t, cur, rem)
    s = str(t + rem)

    return s + s[:-1][::-1] if d & 1 else s + s[::-1]


print(solve())
