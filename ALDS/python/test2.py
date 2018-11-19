n,k = map(int, input().split())
a = list(map(int, input().split()))
ans = 100000000 * n
for i in range(n - k + 1):
    l = i
    r = i + k - 1
    ans = min([ans, abs(a[l]) + abs(a[r] - a[l]), abs(a[r]) + abs(a[r] - a[l])])
print(ans)