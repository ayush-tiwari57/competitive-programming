"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import math 
def primeFactors(n): 
    cnt=0
    while n % 2 == 0: 
        cnt+=1 
        n = n / 2 
    for i in range(3,int(math.sqrt(n))+1,2):  
        while n % i== 0: 
            cnt+=1 
            n = n / i 
    if n > 2: 
        cnt+=1
    return(cnt)

def solution():
    
    # This is the main code
    
    n,k=map(int,input().split())
    x=primeFactors(n)
    print(x)
    if k<=x:
        print(1)
    else:
        print(0)
for _ in range(int(input())):
    solution()