from sys import stdin, stdout
n,m = map(int,stdin.readline().split())
price = list( map(int,stdin.readline().split()) )
def getRoot(i,par):
    while i!=par[i]:
        i = par[i]
    return i

def find(a,b,par):
    return getRoot(a,par)==getRoot(b,par)

def doUnion(a,b,par,size):
    if find(a,b,par):
        return False
    r1 = getRoot(a,par)
    r2 = getRoot(b,par)
    s1 = size[r1]
    s2 = size[r2]
    if s1 > s2:
        par[r2] = r1
        size[r1] += s2
    else:
        par[r1] = r2
        size[r2] += s1
    return True
par = [ i for i in range(n+1) ]
size = [ 1 for i in range(n+1) ]
for i in range(m):
    x,y = map(int,stdin.readline().split())
    doUnion(x,y,par,size)
from collections import defaultdict
d = defaultdict(list)
for i in range(1,n+1):
    p = getRoot(i,par)
    d[p].append(price[i-1])
ans = 0
for k in d:
    ans += min(d[k])
stdout.write("{}\n".format(ans))
