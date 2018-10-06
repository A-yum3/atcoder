n = input()
if n[0] == n[1] and n[1] == n[2]:
    print(n)
elif (n[0] == n[1] and n[1] < n[2]) or n[0] < n[1]:
    b = int(n[0])+1
    print(str(b) + str(b) + str(b))
else:
    print(n[0] + n[0] + n[0])