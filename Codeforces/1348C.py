"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n, k = map(int, input().split())
    s = "".join(sorted(input()))
    if s[0] != s[k-1] or k == n:
        print(s[k-1])
    elif s[k] == s[-1]:
        print(s[0] + s[k] * ((n-1)//k))
    else:
        print(s[k-1:])
for _ in range(int(input())):
    solution()