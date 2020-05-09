"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    p=[0]*n
    for i in range(1,n-1):
        if l[i]>l[i-1] and l[i]>l[i+1]:
            p[i]=1
    cnt=p[1:k-1].count(1)
    ans=cnt
    l=0
    for i in range(n-k):
    	if p[i+k-1]==1:
    		cnt+=1
    	if p[i+1]==1:
    		cnt-=1
    	if cnt>ans:
    		ans=cnt
    		l=i+1
    print(ans+1,l+1)        

for _ in range(int(input())):
    solution()