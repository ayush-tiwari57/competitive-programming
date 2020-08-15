"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    s=list(input())
    n=len(s)
    ans=[]
    i=0
    while i<len(s):
        x=i
        while i<n and s[i]=='1':
            i+=1
        ans.append(i-x)
        i+=1
    ans.sort(reverse=True)
    x=0
    for i in range(0,len(ans),2): 
        x+=ans[i]
    print(x)
t=int(input())
for _ in range(t):
    solution()