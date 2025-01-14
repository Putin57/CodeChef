for _ in range(int(input())):
    n,q=map(int,input().split())
    arr,d=[0]*(n+1),dict()
    for _ in range(q):
        l,r=map(int,input().split())
        val=r-l+1
        arr[l]+=1
        if r+1<len(arr):arr[r+1]-=1
        if r+1 not in d:d[r+1]=0
        d[r+1]+=-val
    for i in range(1,n+1):
        arr[i]+=arr[i-1]
    for i in range(1,n+1):
        arr[i]+=arr[i-1]
        if i in d:arr[i]+=d[i]
    print(*arr[1:n+1])
