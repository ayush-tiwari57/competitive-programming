from collections import deque
n=int(input())
w=list(map(int,input().split()))
d={}
for i in range(n):
    d[w[i]]=i
w.sort()
stack=deque()
s=input()
ans=[]
j=0
for i in range(2*n):
    if s[i]=='0':
        y=d[w[j]]
        stack.append(y)
        ans.append(y+1)
        j+=1
    else:
        x=stack.pop()
        ans.append(x+1)
print(*ans)