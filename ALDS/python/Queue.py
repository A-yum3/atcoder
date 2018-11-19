n,ms = map(int, input().split())
a = [list(map(str, input().split())) for _ in range(n)]
total = 0
for i in a:
    tmp = int(i[1]) - ms
    if tmp <= 0:
        total += ms + tmp
        print("{} {}".format(i[0], total))
    else:
        total += ms
        a.append([i[0], tmp])