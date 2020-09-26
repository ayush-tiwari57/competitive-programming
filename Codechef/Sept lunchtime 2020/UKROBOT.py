"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    
    # This is the main code
    r,c=map(int,input().split())
    ans=''
    for i in range(20):
        ans+='U'
        for j in range(20*(i+1)): 
            ans+='R'
        for j in range(20*(i+1)): 
            ans+='L'
    print(ans)

t=1
for _ in range(t):
    solution()