from sys import stdin, stdout
from collections import defaultdict
t = int(stdin.readline())
while t>0:
    n = int(stdin.readline())
    a = list(map(int,stdin.readline().split()))
    low, high = 1,n
    ans = 1
    while low<=high:
        mid = (low+high)//2
        valid = False
        d = defaultdict(int)
        for i in range(mid):
            d[a[i]]+=1
            if d[a[i]]==2:
                valid=True
        for i in range(mid,n+1):
            d[a[i-mid]]-=1
            if d[a[i-mid]]==0:
                del d[a[i-mid]]
            if i<len(a):
                d[a[i]]+=1
                if d[a[i]]==2:
                    valid=True 
                    break

        if valid:
            ans = mid 
            high = mid-1
        else:
            low = mid+1
    if ans==1:
        ans = -1
    stdout.write("{}\n".format(ans))
    t-=1
