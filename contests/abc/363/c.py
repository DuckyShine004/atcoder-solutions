import sys
from itertools import permutations

input = sys.stdin.readline

n, k = map(int, input().strip().split())
s = input().strip()


def valid(c):
    i = 0
    j = k - 1
    while i < j:
        if c[i] != c[j]:
            return True
        i += 1
        j -= 1
    return False


perm = permutations(s)
res = 0
st = set()

for p in perm:
    if p in st:
        continue
    f = True
    for i in range(n - k + 1):
        if not valid(p[i : i + k]):
            f = False
            break
    if f:
        res += 1
    st.add(p)

print(res)
