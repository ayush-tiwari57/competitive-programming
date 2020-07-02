"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    l=[]
    s=input()
    s1=input()
    l.append(s)
    l.append(s1)
    ans=0
    cur=0
    empty=0
    for i in range(len(s)):
        cur=0
        if l[1][i]=='0':
            cur+=1
        if l[0][i]=='0':
            cur+=1
        empty+=cur
        if empty>=3:
            empty-=3
            ans+=1
        else:
            empty=cur
    print(ans)
solution()