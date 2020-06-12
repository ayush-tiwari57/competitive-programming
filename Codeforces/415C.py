"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n, k = map(int, input().split())
    if k == 0 and n == 1:
        print(1)
    elif n // 2 > k or n == 1:
        print(-1)
    else:
        x = (k - n // 2 + 1)
        print(x, x * 2, *range(x * 2 + 1, x * 2 + 1 + n - 2))

solution()