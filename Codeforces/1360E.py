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
        l=[]
        for i in range(n):
            x=input()
            x+=('1')
            l.append(list(x))
        x='1'*n
        l.append(list(x))
        flag=0
        for i in range(n):
            for j in range(n):
                if l[i][j]=='1':
                    if l[i+1][j]=='0' and l[i][j+1]=='0':
                        flag=1
        if flag==0:
            print('YES')
        else:
            print('NO')  
solution()