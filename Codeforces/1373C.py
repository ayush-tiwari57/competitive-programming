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
        res=len(s)
        cur=0
        for i in range(len(s)):
            if s[i]=='-':
                cur-=1
            else:
                cur+=1
            if cur<0:
                res+=i+1
                cur=0
                
        print(res)
solution()