import sys,io,os
sys.stdin.reconfigure(line_buffering=True)
for _ in range(int(input())):
    n=int(input())
    om_arr=[int(i) for i in input().split()][:n]
    ad_arr=[int(i) for i in input().split()][:n]
    om1=0;ad1=0;om2=0;ad2=0
    for i in range(n):
        if om_arr[i]>0:
            om1+=1
        elif om_arr[i]==0:
            om2=max(om1,om2)
            om1=0
        if ad_arr[i]>0:
            ad1+=1
        elif ad_arr[i]==0:
            ad2=max(ad1,ad2)
            ad1=0
    max_ad=max(ad1,ad2)
    max_om=max(om1,om2)
    if max_ad>max_om:
        print("Addy")
    elif max_om>max_ad:
        print("Om")
    else:
        print("Draw")