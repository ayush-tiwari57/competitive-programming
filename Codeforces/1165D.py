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
        l.sort()
        a=[]
        for i in range(0,(n//2)):
            a.append(l[i]*l[n-i-1])
        if n%2!=0:
            a.append(l[n//2]*l[n//2])
        a=list(set(a))
        # print(a)
        if len(a)==1:
            cnt=0
            x=a[0]
            for i in range(2,int(x**0.5)+1):
                if x%i==0:
                    if x//i==i:
                        cnt+=1
                    else:
                        cnt+=2
            if cnt==n:
                print(x)
            else:
                print(-1)
        else:
            print(-1)


solution()