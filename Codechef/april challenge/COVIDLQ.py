"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    flag=0
    for i in range(0,n):
        if l[i]==1:
            for j in range(i+1,n):
                if l[j]==1:
                    if j-i<6:
                        flag=1
                        break
            if flag==1:
                break
    if flag==1:
        print('NO')
    else:
        print('YES')

for _ in range(int(input())):
    solution()