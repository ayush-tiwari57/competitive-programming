"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        s=input()
        ans=''
        r=0
        p=0
        sc=0
        for i in s:
            if i=='S':
                sc+=1
            elif i=='P':
                p+=1
            else:
                r+=1
        if max([r,sc,p])==r:
            ans='P'*len(s)
        elif max([r,sc,p])==p:
            ans='S'*len(s)
        else:
            ans='R'*len(s)
        print(ans)
solution()