"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    a=[0]*31
    for i in range(n):
        x=l[i]
        cnt=0
        while x>0:
            if x%2==1:
                a[cnt]+=1
            x//=2
            cnt+=1
    ans=[]
    for i in range(31):
        x=a[i]*(2**i)
        ans.append([x,-i])
    ans.sort(reverse=True)
    # print(ans)
    cnt=[0]*31
    for i in range(len(ans)):
        if k==0:
            break
        ind=abs(ans[i][1]) 
        cnt[ind]=1
        k-=1
    ans=0
    # print(cnt)
    for i in range(31):
        ans+=(cnt[i]*(2**i))
    print(ans)
for _ in range(int(input())):
    solution()