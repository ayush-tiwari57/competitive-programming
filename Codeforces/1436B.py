"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    x=n
    while True:
        flag=0
        for i in range(2,int(x**0.5)+1):
            if x%i==0:
                flag=1
                break
        if flag==0:
            f=0
            for i in range(2,int((1+x-n)**0.5)+1):
                if (x+1-n)%i==0:
                    f=1
                    break
            if f==1:
                break
        x+=1
    y=x-n
    for i in range(n):
        for j in range(n):
            if i==j:
                print(y+1,end=' ')
            else:
                print(1,end=' ')
        print()



t=int(input())
for _ in range(t):
    solution()