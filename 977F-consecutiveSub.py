from sys import stdin, stdout
from collections import defaultdict


n = int(stdin.readline())
a = list( map(int,stdin.readline().split()) )
dp = defaultdict(list)
last = 0
for i in range(n):
    if a[i]-1 not in dp:
        dp[a[i]] = 1
    else:
        dp[a[i]] = dp[a[i]-1]+1
m,last = 0,0
for (k,v) in zip(dp.keys(),dp.values()):
    if v>m:
        m = v
        last = k
# print(dp)
seq = []
for i in range(n-1,-1,-1):
    if a[i]==last:
        seq.append(i)
        last -= 1
seq = seq[::-1]

stdout.write("{}\n".format(len(seq)))
for i in range(len(seq)):
    stdout.write("{} ".format(seq[i]+1))
stdout.write("\n")
