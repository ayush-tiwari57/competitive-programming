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
        n=len(s)
        i=1
        ans+=s[0]
        while i<n-1:
            ans+=s[i]
            i+=2
        ans+=s[n-1]
        print(ans)

            

solution()