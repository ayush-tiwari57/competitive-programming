

n = int(input())
for i in range(n):
    s = list(input())
    t = list(input())
    p = list(input())
    result = True
    for ch in t:
        if len(s) != 0 and ch == s[0]:
            s.pop(0)
        elif ch in p:
            p.remove(ch)
        else:
            result = False
            break
    print('yes') if result == True and len(s) == 0 else print('no')