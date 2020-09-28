"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    if sum(l)%n!=0:
        print(-1)
    else:
        ans=[]
        for i in range(1,n):
            if l[i]%(i+1)==0:
                ans.append([i+1,1,l[i]//(i+1)])
                l[0]+=l[i]
                l[i]=0

            else:
                ans.append([1,i+1,(i+1)-l[i]%(i+1)])
                d=((i+1)-l[i]%(i+1))
                l[i]+=d
                l[0]-=d
                ans.append([i+1,1,l[i]//(i+1)])
                l[0]+=l[i]
                l[i]=0
        x=sum(l)//n
        for i in range(1,n):
            ans.append([1,i+1,x])
        print(len(ans))
        for i in range(len(ans)):
            print(ans[i][0],ans[i][1],ans[i][2])
        


t=int(input())
for _ in range(t):
    solution()