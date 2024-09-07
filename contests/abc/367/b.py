import sys

input = sys.stdin.readline

X = input().strip()
s = X.split(".")
i = len(s[1]) - 1
while i >= 0 and s[1][i] == "0":
    i -= 1
s[1] = s[1][: i + 1]
print(".".join(s) if s[1] else s[0])
