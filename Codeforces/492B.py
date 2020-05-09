i=lambda:map(int,input().split())
n,l=i()
a=sorted(i())
print(max(r-l for l,r in zip([-a[0]]+a,a+[2*l-a[-1]]))/2)