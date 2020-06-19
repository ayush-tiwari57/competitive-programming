"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline
import math
def solution():
    k=int(input())
    s='codeforces'
    i,sm=0,1
    l=[1]*10
    while sm<k:
    	sm//=l[i]
    	l[i]+=1
    	sm*=l[i]
    	i=(i+1)%10
    ans=[s[i]*l[i] for i in range(10)]
    print(''.join(ans))
solution()