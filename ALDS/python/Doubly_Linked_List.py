from collections import deque

def insert(x):
    global q
    q.appendleft(int(x))

def delete(x):
    global q
    del q[q.index(int(x))]

def deleteFirst():
    global q
    q.popleft()

def deleteLast():
    global q
    q.pop()

# s[0] prev
# s[1] key
# s[2] next

# n = int(input())
# a = [list(map(str, input().split())) for _ in range(n)] # a[0]命令 a[1]引数
n = 7
a = [
    ['insert', '5'],
    ['insert', '2'],
    ['insert', '3'],
    ['insert', '1'],
    ['delete', '3'],
    ['insert', '6'],
    ['delete', '5']
    ]
q = deque([])
for i in a:
    if a[0] == 'insert':
        insert(i[1])
    elif a[0] == 'delete':
        delete(i[1])
    elif a[0] == 'deleteFirst':
        deleteFirst()
    else:
        deleteLast()
