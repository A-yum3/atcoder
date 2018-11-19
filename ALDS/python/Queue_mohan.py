# Qは配列を別途用意すること
Q = []

def initialize():
    head = tail = 0

def isEmpty():
    return head == tail

def isFull():
    return head == (tail  + 1) % MAX

def enqueue(x):
    if isFull():
    # error process
    # Q[tail] = x
    if tail + 1 == MAX:
        tail = 0
    else:
        tail += 1

def dequeue():
    if isEmpty():
        # error process
    x = Q[head]
    if head + 1 == MAX:
        head = 0
    else:
        head += 1
    return x

