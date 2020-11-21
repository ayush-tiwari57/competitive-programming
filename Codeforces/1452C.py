"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    t1=[]
    t2=[]
    s=list(input())
    cnt=0
    for i in range(len(s)):
        if s[i]=='(':
            t1.append(s[i])
        elif s[i]==')':
            if len(t1)>0 and t1[-1]=='(':
                t1.pop()
                cnt+=1
            else:
                t1.append(s[i])
        elif s[i]=='[':
            t2.append(s[i])
        else:
            if len(t2)>0 and t2[-1]=='[':
                cnt+=1
                t2.pop()
            else:
                t2.append(s[i])
    print(cnt)
    
t=int(input())
for _ in range(t):
    solution()