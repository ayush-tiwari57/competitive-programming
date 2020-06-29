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
        n=int(input())
        cnt2=0
        cnt3=0
        while n%2==0:
            n//=2
            cnt2+=1
        while n%3==0:
            n//=3
            cnt3+=1
        if n!=1:
            print(-1)
        else:
            if cnt2>cnt3:
                print(-1)
            else:
                print(2*cnt3-cnt2)


solution()