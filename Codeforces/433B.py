n=int(input())
l=list(map(int,input().split()))
s=sorted(l)
for i in range(1,n):
    l[i]+=l[i-1]
    s[i]+=s[i-1]
l.reverse()
l.append(0)
l.reverse()
s.reverse()
s.append(0)
s.reverse()
for _ in range(int(input())):
    ty,li,r=map(int,input().split())
    if ty==1:
        print(l[r]-l[li-1])
    else:
        print(s[r]-s[li-1])