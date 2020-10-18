"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution(test):
    
    # This is the main code
    w,n=map(int,input().split())
    l=list(map(int,input().split()))
    ans=2e15
    for i in range(w):
        x=0
        for j in range(w):
            if l[i]<l[j]:
                x+=min(abs(l[i]-l[j]),l[i]+n-l[j])
            elif l[i]>l[j]:
                x+=min(abs(l[i]-l[j]),l[j]+n-l[i])
        ans=min(ans,x)
    print('Case #'+str(test+1)+':',ans)
        
t=int(input())
for i in range(t):
    solution(i)