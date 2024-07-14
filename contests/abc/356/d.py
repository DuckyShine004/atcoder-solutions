n = 3
m = 3
res = 0
mod = 998244353

for i in range(60):
    if not (m & (1 << i)):
        continue
    ones = (n + 1) // (2 << i)
    rems = (n + 1) % (2 << i)
    res += (ones << i) + max(0, rems - (1 << i))

print(res % mod)
