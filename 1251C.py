from sys import stdin, stdout

def parity(a,b):
    n1,n2 = int(a),int(b)
    if (n1%2==0 and n2%2) or (n1%2 and n2%2==0) : 
        return True 
    return False
t = int(stdin.readline())
while t>0:
    s = stdin.readline().split('\n')[0]
    even,odd = [],[]
    for i in range(len(s)):
        if int(s[i])%2:
            odd.append(int(s[i]))
        else:
            even.append(int(s[i]))
    ans = []
    # print(even,odd)
    l,r=0,0
    while l<len(even) and r<len(odd):
        if even[l]<odd[r]:
            ans.append(even[l])
            l+=1
        else:
            ans.append(odd[r])
            r+=1
    while l<len(even):
        ans.append(even[l])
        l+=1
    while r<len(odd):
        ans.append(odd[r])
        r+=1
    s = ""
    for a in ans:
        s += str(a)
    stdout.write("{}\n".format(s) )
    t-=1
