"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
#import sys
#input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    if n>45:
        print(-1)
        return
    ans=[]
    cnt=9
    while n>cnt:
        n-=cnt
        ans.append(cnt)
        cnt-=1
    ans.append(n)
    ans.reverse()
    l=''
    for i in ans:
        l+=str(i)
    print(l)
    

t=int(input())
for _ in range(t):
    solution()