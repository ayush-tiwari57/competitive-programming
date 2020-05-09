n,k = map(int,input().split())
 
s = input()
 
a,b = 0,0
 
j = 0
 
ans = 0
 
for i in s:
 
	if i=='a':
 
		a+=1
 
	else:
 
		b+=1
 
	if min(a,b)>k:
 
		if s[j]=='a':
 
			a-=1
 
		else:
 
			b-=1
 
		j += 1
 
	else:
 
		ans += 1
 
print(ans)