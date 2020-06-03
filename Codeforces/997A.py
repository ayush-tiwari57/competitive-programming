"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n,x,y=map(int,input().split())
    s=input()
    s='1'+s+'1'
    flag=0
    cnt=0
    for i in range(1,len(s)):
        if s[i-1]=='1' and s[i]=='0':
            cnt+=1;
    if cnt==0:
        print(0)
    else:
        if x<y:
            print((cnt-1)*x+y)
        else:
            print((cnt)*y)
solution()