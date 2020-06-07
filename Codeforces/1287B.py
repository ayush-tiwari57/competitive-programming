"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    n, k = map(int, input().split())
    S = [input().strip() for i in range(n)]
    SET = set(S)
    p=0
    
    for i in range(n - 1):
        for j in range(i + 1, n):
    
            c = []
            for l in range(k):
                if S[i][l] == S[j][l]:
                    c += S[i][l]
                else:
                    c += chr(236 - ord(S[i][l]) - ord(S[j][l]))
    
            if "".join(c) in SET:
                p += 1
    print(p // 3)

solution()