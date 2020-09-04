"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    
    # This is the main code
    n=int(input())
    d={}
    for i in range(n):
        s=input()
        for j in s:
            d[j]=d.get(j,0)+1
    flag=0
    for i in d:
        if d[i]%n:
            flag=1
    if flag:
        print('NO')
    else:
        print('YES')

t=int(input())
for _ in range(t):
    solution()