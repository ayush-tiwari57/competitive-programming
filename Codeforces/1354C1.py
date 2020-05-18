"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

import math
    

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        x=math.sin(math.pi/(2*n))
        y=math.cos(math.pi/(2*n))
        print(y/x)


solution()