# Enter your code here. Read input from STDIN. Print output to STDOUT
from __future__ import division
a = int(raw_input())
dic={}
for i in range(0, a):
   name = raw_input()
   k=name.split()
   g=k[1:4]
   g = map(float, g)
   dic[k[0]]=g
s=raw_input()
if s in dic:
   g=dic[s]
   print "%0.2f" % (sum(g)/3)
