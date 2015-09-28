# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
set1 = list(map(int,raw_input().split()))
s = set(set1)
n = input()
for i in range(n):
    prb = raw_input()
    op,dt = prb.split()
    if op=="intersection_update":
        set2 = list(map(int,raw_input().split()))
        s.intersection_update(set2)
    elif op=="update":
        set2 = list(map(int,raw_input().split()))
        s.update(set2)
    elif op=="symmetric_difference_update":
        dt=int(dt)
        set2 = list(map(int,raw_input().split()))
        s.symmetric_difference_update(set2)
    else:
        set3 = list(map(int,raw_input().split()))
        s.difference_update(set3)
print sum(set(s))
