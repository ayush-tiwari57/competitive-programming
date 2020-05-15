"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    l=list(input())
    a=97
    b=0
    for h in l:
      if h<=chr(a):
        l[b]=chr(a)
        a+=1
      if a>122:
        print("".join(l))
        break
      b+=1
    else:
      print("-1")


solution()