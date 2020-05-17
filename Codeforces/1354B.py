"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        s=input()
        d={}
        m=len(s)
        for i in range(len(s)):
            d[s[i]]=i
            if len(d)==3:
                m=min(m,(max(d.values())-min(d.values())+1))
        if len(d)!=3:
            print(0)
        else:
            print(m)

solution()