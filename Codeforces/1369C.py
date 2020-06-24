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
        n,k=map(int,input().split())
        l=list(map(int,input().split()))
        w=list(map(int,input().split()))
        l.sort(reverse=True)
        w.sort()
        z=[]
        beg=0
        s=0
        for i in range(k):
            if w[i]==1:
                s+=2*l[beg]
                beg+=1
            else:
                z.append(w[i])
        z.sort(reverse=True)
        end=n-1
        for i in range(len(z)):
            # print(beg,end)
            s+=l[beg]+l[end]
            beg+=1
            end-=(z[i]-1)
        print(s)            
solution()