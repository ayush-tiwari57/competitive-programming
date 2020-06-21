"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code\
        n=int(input())
        l=list(map(int,input().split()))
        o=[]
        e=[]
        a=[]
        if n==2:
            print(1,2)
        else:
            for i in range(2*n):
                if len(a)==n-1:
                    break
                if l[i]==-1:
                    continue
                for j in range(i+1,2*n):
                    if l[j]!=-1:
                            if l[i]%2==0 and l[j]%2==0:
                                a.append([i+1,j+1])
                                l[j]=-1
                                break
                            elif l[i]%2!=0 and l[j]%2!=0:
                                a.append([i+1,j+1])
                                l[j]=-1
                                break
            for i in range(len(a)):
                print(a[i][0],a[i][1])
            

solution()