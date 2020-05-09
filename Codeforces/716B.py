s = input()
    
for i in range(len(s) - 25):
    sub = s[i:i+26]
    missing = set('ABCDEFGHIJKLMNOPQRSTUVWXYZ') - set(sub)
    
    if len(missing) == sub.count('?'):
        while missing:
            sub = sub.replace('?', missing.pop(), 1)
        
        print((s[:i] + sub + s[i+26:]).replace('?', 'A'))
        break
else:
    print(-1)