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
        a=list(input())
        b=list(input())
        a+=['0']
        b+=['0']
        ans=[]
        rev=[]
        x='0'
        for i in range(1,n+1):
            if a[i]!=a[i-1]:
                ans.append(i)
                # x=a[i+1]
        # if x=='1':
        #     ans.append(n)
        for i in range(1,n+1):
            if b[i]!=b[i-1]:
                rev.append(i)
                # x=b[i+1]
        # if x=='1':
        #     rev.append(n)
        rev.reverse()
        print(*([len(ans)+len(rev)]+ans+rev))
solution()