import sys
n,a=list(map(int, input().strip().split()))
s=input()
ans=0
rt="abcdefghijklmnopqrstuvwxyz"
for i in rt:
    s=s.replace(i,'',a)
    
    a=a-(n-len(s))
    n=len(s)
    if(a==0):
        break
print(s)