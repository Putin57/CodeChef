N=1005
arr,pref=[[0]*N for _ in range(N)],[[0]*N for _ in range(N)]
r,c=map(int,input().split())
for i in range(1,r+1):
    s=list(input())
    for j in range(1,c+1):
        arr[i][j]=int(s[j-1])
for _ in range(int(input())):
    x1,y1,x2,y2=map(int,input().split())
    pref[x1][y1]+=1
    pref[x1][y2+1]-=1
    pref[x2+1][y1]-=1
    pref[x2+1][y2+1]+=1
for i in range(1,r+1):
    for j in range(1,c+1):
        pref[i][j]+=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]
for i in range(1,r+1):
    for j in range(1,c+1):
        if pref[i][j]%2:
            if arr[i][j]==0:arr[i][j]=1
            else:arr[i][j]=0
        print(arr[i][j],end="")
    print()
