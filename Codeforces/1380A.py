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
        flag=0
        for i in range(1,n-1):
            if l[i]>l[i+1] and l[i-1]<l[i]:
                print('YES')
                print(i,i+1,i+2)
                flag=1
                break
        if flag==0:
            print('NO')

solution()