s = input()
ans = ""
for c in s:
    if len(ans) >= 2 and ans[-1] == ans[-2] == c: continue
    if len(ans) >= 3 and ans[-3] == ans[-2] and ans[-1] == c: continue
    ans += c
print(ans)

