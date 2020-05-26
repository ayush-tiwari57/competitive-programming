"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
import math
def solution():
    for _ in range(int(input())):
        
        # This is the main code
        x1,y1,x2,y2=map(int,input().split())
        print((x2-x1)*(y2-y1)+1)
solution()