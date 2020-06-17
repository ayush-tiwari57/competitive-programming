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
        l=list(input())
        cnt=0
        if l.count('1')==0:
            cnt+=1+((n-1)//(k+1))
        else:
            d=0
            i=0
            x=0
            if l[0]!='1':
                while l[i]!='1':
                    i+=1
                d=i
                x=d-k
                x=max(0,x)
                cnt+=x//(k+1)
                if x%(k+1)!=0:
                    cnt+=1
                x=i
            for i in range(x+1,n):
                if l[i]=='1':
                    x=i-d-1-2*k
                    x=max(0,x)
                    cnt+=x//(k+1)
                    if x%(k+1)!=0:
                        cnt+=1
                    d=i
            if d!=n-1:
                x=n-d-1-k
                x=max(0,x)
                cnt+=x//(k+1)
                if x%(k+1)!=0:
                    cnt+=1
    
        print(cnt)
    
    
solution()