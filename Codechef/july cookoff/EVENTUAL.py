"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    
        
    # This is the main code
    d={}
    n=int(input())
    s=list(input())
    for i in range(n):
        d[s[i]]=d.get(s[i],0)+1
    for i in d.values():
        if i%2!=0:
            print('NO')
            return
    print('YES')


for _ in range(int(input())):
    solution()