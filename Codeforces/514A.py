s=[min(int(i),9-int(i)) for i in input()]
if s[0]<1:s[0]=9
print(*s,sep='')