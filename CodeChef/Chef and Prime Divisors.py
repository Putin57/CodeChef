from math import gcd
for _ in range(int(input())):
    a,b=map(int,input().split())
    while True:
        g=gcd(a,b)
        if g==1:break
        b//=g
    print("Yes"if b==1 else"No")
