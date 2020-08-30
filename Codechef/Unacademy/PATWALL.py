"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,s=map(int,input().split())
    l=list(map(int,input().split()))
    beg=1
    end=n
    ans=0
    while(beg<=end):
        k=(beg+end)//2
        flag=0
        cnt=0
        for i in range(k):
            cnt+=l[i]+(i+1)*k
        if cnt<=s:
            flag=1
        j=0
        for i in range(k-1,n):
            cnt-=l[j]+(j+1)*k
            j+=1
            cnt+=l[i]+ (i+1)*k
            if cnt<=s:
                flag=1
                break
        # print(ans,beg)
        if flag:
            ans=k
            beg=k+1
        else:
            end=k-1
    print(ans)

t=1
for _ in range(t):
    solution()