"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
def prime(n):
    flag=1
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            flag=0
            break
    return flag
def solution():
    n=int(input())
    if prime(n):
        print(1)
    elif n%2==0:
        print(2)
    elif prime(n-2):
        print(2)
    else:
        print(3)

solution()