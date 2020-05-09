"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""


def solution():
    
    # This is the main code
    for i in range(9):
        s=list(input())
        for j in range(9):
            if s[j]=='1':
                s[j]='2'
        s=''.join(s)
        print(s)
for _ in range(int(input())):
    solution()