for _ in range(int(input())):
    n,x=map(int,input().split())
    li=list(map(int,input().split()))[:n]
    if 1<=x<=n:
        if x==len(li):
            print(min(li)-1)
        elif x==1:
            print(max(li)-1)
        else:
            li=sorted(li)
            li=li[n-x:len(li)]
            print(min(li)-1)
