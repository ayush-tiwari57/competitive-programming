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
        n=int(input())
        s=input()
        cnt=0
        ans=0
        for i in range(n):
            if s[i]==')':
                cnt-=1
            else:
                cnt+=1
            ans=min(ans,cnt)
        print(abs(ans))

solution()