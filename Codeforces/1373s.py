res = 0
j=0
s=input()
while True:
    cur = j
    ok = True
    j+=1
    print(cur)
    for i in s:
        res = res + 1
        if i == '+':
            cur = cur + 1
        else:
            cur = cur - 1
        if cur < 0:
            ok = False
            break
    # print(res)
    if ok:
        break
print(res)