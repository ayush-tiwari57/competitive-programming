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
        x=2*(10**5)+2
        l=list(map(int,input().split()))
        cnt=[0]*(x)
        flag=0
        for i in range(n):
            cnt[l[i]]+=1
            if cnt[l[i]]>=3:
                flag=1
                break
        m=max(l)
        a=[]
        # print(cnt)
        if cnt[m]>1 or flag==1:
            print('NO')
        else:
            print('YES')
            for i in range(m+1):
                if cnt[i]>0:
                    a.append(i)
                    cnt[i]-=1
            for i in range(m,-1,-1):
                if cnt[i]>0:
                    a.append(i)
            print(*a)
solution()