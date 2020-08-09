"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
import math
input = sys.stdin.buffer.readline

def power(x, y, p) : 
    res = 1
  
    x = x % p  
      
    if (x == 0) : 
        return 0
  
    while (y > 0) : 
           
        if ((y & 1) == 1) : 
            res = (res * x) % p 

        y = y >> 1    
        x = (x * x) % p 
          
    return res 

def solution():
    
    # This is the main code
    n=int(input())
    mod=10**9+7
    ans=1
    for i in range(2,n+1):
        ans*=i
        ans=ans%mod
    x=power(2,n-1,mod)
    print(((ans-x)+mod)%mod)
solution()