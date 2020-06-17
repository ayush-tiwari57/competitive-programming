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
        l=list(map(int,input().split()))
        cnt1=0
        cnt2=0
        for i in range(n):
            if i%2==0 and l[i]%2==1:
                cnt1+=1
            elif l[i]%2==0 and i%2==1:
                cnt2+=1
        if cnt1!=cnt2:
            print(-1)
        else:
            print(cnt1)


solution()