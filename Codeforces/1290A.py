"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n, m, k = map(int, input().split())
        k = min(m-1, k)
        a = list(map(int, input().split()))
        ans = 0
        for i in range(k+1):
            ans1 = 10**10
            for j in range(m-k):
                ans1 = min(ans1, max(a[i+j], a[i+j+n-m]))
            ans = max(ans, ans1)
        print(ans)


solution()