"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for t in range(int(input())):
        
        # This is the main code
        n=int(input())
        a=list(map(int,input().split()))
        l=[a[0]]
        for i in range(1,n):
            if a[i]==l[-1]:
                continue
            l.append(a[i])
        # print(l)
        inc=0
        dec=0
        ans=0
        for i in range(1,len(l)):
            if l[i]>l[i-1]:
                inc+=1
                dec=0
            else:
                dec+=1
                inc=0
            if inc>3 or dec>3:
                ans+=1
                inc=0
                dec=0
        print('Case #'+str(t+1)+':',ans)

solution()