"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""


def solution():
    
    # This is the main code
    n=int(input())
    if (n//2)%2!=0:
        print('NO')
    else:
        l=[]
        print('YES')
        x=0
        y=-1
        for i in range(n//2):
            x+=2
            l.append(x)
        se=sum(l)
        for i in range(n//2-1):
            y+=2
            l.append(y)
        so=sum(l[n//2:])
        l.append(se-so)
        print(*l)
for _ in range(int(input())):
    solution()