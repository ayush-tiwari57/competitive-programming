"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
	
	# This is the main code
	n=int(input())
	l=list(map(int,input().split()))
	ma=l[0]
	ma1=-1
	ans=0
	for i in range(n):
		if l[i]>=ma:
			ma1=ma
			ma=l[i]
		elif l[i]>=ma1:
			ma1=l[i]
	su=sum(l)
	for i in range(n):
		v=su-l[i]
		if l[i]==ma:
			u=(ma1*(n-1))-v-l[i]
			if u>0:
				ans=max(ans,u)
			else:
				if(abs(u)%(n-1)!=0):
					q=(n-1)*((abs(u)//(n-1))+1)-(abs(u))
					ans=max(ans,q)
		else:
			u=ma*(n-1)-v-l[i]
			if u>0:
				ans=max(ans,u)
			else:
				if(abs(u)%(n-1)!=0):
					q=((abs(u)//(n-1))+1)*(n-1)-abs(u)
					ans=max(ans,q)
	print(ans)
t=int(input())
for _ in range(t):
	solution()