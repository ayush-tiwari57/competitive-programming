"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""


def solution():
    
    # This is the main code
    n=int(input())
    ans=0
    while n>1:
        m=1
        while (((3*m*m+m)//2))<=n:
            m+=1
        m-=1
        n-=(((3*m*m+m)))//2
        ans+=1
    print(ans)
for _ in range(int(input())):
    solution()  