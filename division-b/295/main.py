import heapq

MAXN = int(1e4 + 1)
n, m = map(int, input().split(" "))
vis = [False] * MAXN
q = [(0, n)]
res = -1
while q:
    v, u = heapq.heappop(q)
    if u == m:
        res = v
        break
    if vis[u]:
        continue
    vis[u] = True
    if u > m:
        heapq.heappush(q, (v + u - m, m))
    elif u < m:
        if u - 1 > 0 and not vis[u - 1]:
            heapq.heappush(q, (v + 1, u - 1))
        if not vis[2 * u]:
            heapq.heappush(q, (v + 1, 2 * u))
print(res, 5 << 1)
