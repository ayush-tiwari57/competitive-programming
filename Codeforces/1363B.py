"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        s=input()
        ans=2e9
        cnt0=cnt1=d0=d1=0
        n=len(s)
        for i in range(n):
            if s[i]=='0':
                cnt0+=1
            else:
                cnt1+=1
        for i in range(n):
            if s[i]=='0':
                d0+=1
            else:
                d1+=1
            x=d0+cnt1-d1
            y=d1+cnt0-d0
            z=min(x,y)
            ans=min(z,ans)
        print(ans)
solution()