"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n, k, x = map(int, input().split())
    arr = list(map(int, input().split()))
    res = 0
    for i in range(n):
        t = arr.copy()
        t.insert(i, x)
        while len(t) > 2:
            curr_size = len(t)
            for j in range(2, len(t)):
                if not (t[j-2] == t[j-1] == t[j]): continue
                p = j + 1
                while p < len(t) and t[j] == t[p]:
                    p += 1
                t = t[:j-2] + t[p:]
                break
            if len(t) == curr_size:
                break
        res = max(res, n - len(t))
    print(res)


solution()