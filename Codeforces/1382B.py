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
        l=list(map(int,input().split()))
        ind=-1
        cnt=0
        for i in range(n):
            if l[i]==1:
                cnt+=1
            else:
                if ind==-1:
                    ind=i
        ind+=1
        if n==1:
            if n%2==1:
                print('First')
            else:
                print('Second')
        else:
            if cnt!=n:
                if ind%2!=0:
                    print('First')
                else:
                    print('Second')
            else:
                if n%2!=0:
                    print('First')
                else:
                    print('Second')
solution()