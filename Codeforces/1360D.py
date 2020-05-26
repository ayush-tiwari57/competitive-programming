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
        n,k=map(int,input().split())
        m=2e9
        l=[]
        for i in range(1,int(n**0.5)+1):
            if n%i==0:
                l.append(i)
                l.append(n//i)
        l.sort(reverse=True)
        # print(l)     
        for i in range(len(l)):
            if l[i]<=k:
                print(n//l[i])
                break


solution()