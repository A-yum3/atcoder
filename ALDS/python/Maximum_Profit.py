N = int(input())
R = [int(input()) for _ in range(N)]
maxv = -2000000000
minv = R[0]

for i in range(1,N):
  maxv = max([maxv, R[i] - minv ])
  minv = min([minv, R[i]])

print(maxv)