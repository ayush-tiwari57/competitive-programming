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
        n=int(input())
        s=input()

        ans=''
        z=''
        if '0' not in s:
            print(s)
        elif '1' not in s:
            print(s)
        else:
            s=list(s)
            i=0
            while s[i]=='0':
                ans+=s[i]
                i+=1
            z=s[i]
            for j in range(i+1,n):
                if s[j]=='0':   
                    z='0'
                else:
                    z+='1'
            if z!='':
                ans+=z
            print(ans)

solution()