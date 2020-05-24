"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
# from collections import Counter
def solution():
    n=int(input())
    l=list(map(int,input().split()))
    d=[0]*101
    for i in l:
        d[i]+=1
    cnt=0
    ind=0
    x=[]
    flag=0
    s=''
    for i in range(101):
        if d[i]==1:
            cnt+=1
            x.append(i)
        if d[i]>2:
            ind=i
    # print(ind)
    if cnt%2!=0 and ind==0:
        print('NO')
    else:
        print('YES')
        if cnt%2==0:
            for i in range(n):
                if d[l[i]]==1:
                    if flag==0:
                        s+='A'
                        flag=1
                    else:
                        s+='B'
                        flag=0
                else:
                    s+='A'
        else:
            flag=0

            fa=0
            fb=0
            f=0
            for i in range(n):
                if d[l[i]]==1:
                    # print(l[i])
                    if flag==0:
                        s+='A'
                        flag=1
                    else:
                        s+='B'
                        flag=0
                elif l[i]==ind and f==0:
                    if flag==0:
                        s+='A'
                        fa=1
                        flag=1
                    else:
                        s+='B'
                        fb=1
                        flag=0
                    f=1
                else:
                    if l[i]==ind:
                        if fa==1:
                            s+='B'
                        else:
                            s+='A'
                    else:   
                        s+='A'
    print(s)
solution()