import sys

input = sys.stdin.readline

n = int(input().strip())
s, t = list(input().strip()), list(input().strip())
s.extend([".", "."])
t.extend([".", "."])
k = 2 * n


def valid(s, t):
    for i in range(n + 2):
        if s[i] != t[i]:
            return False

    return True


def find(s):
    for i in range(n + 1):
        if s[i] == s[i + 1] == ".":
            return i, i + 1


def dp(i, s):
    if valid(s, t):
        return i

    if i == n:
        return -1

    out = float("inf")
    p, q = find(s)

    # Choose any of the x positions if it has a stone next to it
    for x in range(n + 1):
        if s[x] == "." or s[x + 1] == ".":
            continue

        s[x], s[x + 1], s[p], s[q] = (
            s[p],
            s[q],
            s[x],
            s[x + 1],
        )

        cur = dp(i + 1, s)

        if cur != -1:
            out = min(out, cur)

        s[p], s[q], s[x], s[x + 1] = (
            s[x],
            s[x + 1],
            s[p],
            s[q],
        )

    return out


print(dp(0, s))
