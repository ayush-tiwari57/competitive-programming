"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    a,b,c,d=sorted(map(int,input().split()))
    x=b-a
    num1=(c+x)//2
    num2=b-num1
    num3=a-num2
    print(num1,num2,num3)

solution()