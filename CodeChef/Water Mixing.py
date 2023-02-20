for _ in range(int(input())):
    x,y,a,b=map(int,input().split())
    if x==y:
        print("YES")
    elif x<y:
        if (y-x)<=a:
            print("YES")
        else:
            print("NO")
    else:
        if (x-y)<=b:
            print("YES")
        else:
            print("NO")