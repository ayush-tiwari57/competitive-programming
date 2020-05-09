n=int(input())
for i in range(n):
    b,p,f=map(int,input().split())
    h,c=map(int,input().split())
    a=min(b//2,p if h>c else f)
    d=min((b-2*a)//2,f if h>c else p)
    print(max(h,c)*a+min(h,c)*d)