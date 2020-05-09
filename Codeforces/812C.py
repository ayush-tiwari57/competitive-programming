n,s=map(int,input().split())
a=list(map(int,input().split()))
beg=0
end=n
def trier(k) :
    p = sorted([a[i]+ k*(i+1) for i in range(n)])
    som = sum(p[0:k])
    return 0 if som>s else som
 
l = 0
r = n 
while l < r :
	k =  (l +r +1)//2 
	if trier(k) : l = k
	else :	r = k - 1
 
print(l,trier(l))