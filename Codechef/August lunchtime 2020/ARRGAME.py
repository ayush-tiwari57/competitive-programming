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
    d={}
    i=0
    m=0
    while i<n:
        cnt=0
        while l[i]==0:
            cnt+=1
            i+=1
        if cnt:
            m=max(m,cnt)
            d[cnt]=d.get(cnt,0)+1
        i+=1
    # print(m)
    if m==0:
        print('No')
    else:
        flag=0
        for i in d:
            # print(i)
            if i>=m//2+1:
                if i==m:
                    if d[m]>1:
                        flag=1
                        break
                else:
                    flag=1
                    break
        if flag:
            print('No')
        else:
            if m%2:
                print('Yes')
            else:
                print('No')

t=int(input())
for _ in range(t):
    solution()