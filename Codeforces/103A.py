x=int(input())
s=[int(n) for n in input().split()]	
l=0
for n in range(x):
    l+=(s[n]-1)*(n+1)+1
print(l)