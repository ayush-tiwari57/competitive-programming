n,a,b,c,d= map(int,input().split())
arr = [a+b,a+c,b+d,c+d]
count = n*(n-max(arr)+min(arr))
print(max(0,count))