from math import ceil as c
for _ in range(int(input())):
    x,y,z=map(int,input().split())
    print(c(x/(y*z)))