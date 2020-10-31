from sys import stdin, stdout 

def valid(a,k,M):
    n = len(a)
    replace = 0
    d = {}
    for i in range(n//2):
        s = a[i] + a[n-i-1]
        d[s] = 1
    if len(d)==1:
        return 0
    for i in range(n//2):
        m = min(a[i],a[n-i-1])
        if m>=k:
            return -1
        elif max(a[i],a[n-i-1]) + M < k:
            return -1
        elif a[i]+a[n-i-1]==k:
            continue
        else:
            replace += 1

    return replace

t = int(stdin.readline())

INF = 10**12
NINF = -INF
while t>0:
    n, k = map(int,stdin.readline().split())
    a = list( map(int,stdin.readline().split()) )
    ans = 0
    if n==2:
        ans = 0
    else:
        low, high = 2,2*k
        ans = INF
        while low<=high:
            mid = (low+high)//2
            c = valid( a,mid,k )
            # print(mid,c)
            if c!=-1:
                ans = min(ans,c)
                high = mid-1
            else:
                low = mid+1
    stdout.write("{}\n".format(ans))
    t-=1
