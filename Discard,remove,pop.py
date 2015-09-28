n = input()
s = set(map(int, raw_input().split()))
for i in range(input()):
    k=raw_input()
    if k=="pop":
        s.pop()
    else:
        op,data = k.split()
        if op=="remove":
            s.remove(int(data))
        else:
            s.discard(int(data))
print sum(s)
    
