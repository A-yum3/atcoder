s = input()
ans = ""
for c in s:
    if c == 'O': ans += "0"
    elif c == 'D': ans += "0"
    elif c == 'I': ans += "1"
    elif c == 'Z': ans += "2"
    elif c == 'S': ans += "5"
    elif c == 'B': ans += "8"
    else: ans += c
print(ans)
