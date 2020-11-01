"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline    

def solution():
    
    # This is the main code
    p,q=map(int,input().split())
    if p%q!=0:
        print(p)
    else:
        l=[]
        for i in range(2,int(q**0.5)+1):
            if q%i==0:
                l.append(i)
                if i!=q//i:
                    l.append(q//i)
        l.append(q)
        # print(l)
        ans=1
        for x in l:
            z=p
            while z%x==0:
                # print(z,x)
                z//=x
                if z%q!=0:
                    ans=max(ans,z)
                    break
        print(ans)
                
t=int(input())
for _ in range(t):
    solution()