"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def modInverse(a, m): 
  
    g = gcd(a, m) 
  
    if (g != 1): 
        print("Inverse doesn't exist") 
  
    else: 
  
        return    power(a, m - 2, m)
  
# To compute x^y under modulo m 
  
  
def power(x, y, m): 
  
    if (y == 0): 
        return 1
  
    p = power(x, y // 2, m) % m 
    p = (p * p) % m 
  
    if(y % 2 == 0): 
        return p 
    else: 
        return ((x * p) % m) 
  
# Function to return gcd of a and b 
  
  
def gcd(a, b): 
    if (a == 0): 
        return b 
  
    return gcd(b % a, a) 

def solution():
    
    # This is the main code
    n=int(input())
    mod=998244353
    a=[0]*(n+5)
    a[1]=1
    a[2]=1
    for i in range(3,n+1):
        a[i]+=(a[i-1]+a[i-2])%mod   
    q=modInverse(power(2,n,mod),mod)
    print((a[n]*q)%mod)
    
t=1
for _ in range(t):
    solution()