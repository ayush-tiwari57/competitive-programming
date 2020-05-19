"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    a,b,c=map(int,input().split())
    f=min(a//3,b//2)
    f=min(f,c//2)
    a-=3*f
    b-=2*f
    c-=2*f
    m=0
    
    # print(f)
    for i in range(7):
        cnt=0
        s=[a,a,b,c,a,c,b]
        for j in range(7):
            if s[(i+j)%7]<=0:
                break
            cnt+=1
            # print((i+j)%7)
            if (i+j)%7==0 or (i+j)%7==1 or (i+j)%7==4:
                s[0]-=1
                s[1]-=1
                s[4]-=1
            elif (i+j)%7==2 or (i+j)%7==6:
                s[2]-=1
                s[6]-=1
            else:
                s[3]-=1
                s[5]-=1
        m=max(m,cnt)
    print(7*f+m)
solution()