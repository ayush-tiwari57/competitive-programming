"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        ts=int(input())
        if ts%2!=0:
            print((ts-1)//2)
        else:
            cnt=0
            n=ts
            while ts%2==0:
                ts//=2
                cnt+=1
            if ts==1:
                print(0)
            else:
                cnt+=1
                ans=0
                while 2**cnt<=n:
                    ans+=1
                    cnt+=1
                print(ans)


solution()