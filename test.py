s = input()
ans = ""
for c in s:
    if c == 'O': print(0)
    elif c == 'D': print(0)
    elif c == 'I': print(1)
    elif c == 'Z': print(2)
    elif c == 'S': print(5)
    elif c == 'B': print(8)
    else: print(c)
