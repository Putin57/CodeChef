for _ in range(int(input())):
    x,y=map(int,input().split())
    if x+y>=11:
        print(21-(x+y))
    else:
        print(-1)