"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    if n==5:
        ans=1
        for i in range(n):
            ans*=l[i]
    else:
        l.sort()
        if max(l)==0:
            ans=0
        elif max(l)<0:
            ans=1
            i=n-1
            cnt=0
            while cnt!=5:
                ans*=l[i]
                i-=1
                cnt+=1 
        else:
            ans=1
            i = 0 
            j = n - 1
            k=5
            
            if (k & 1): 
                ans *= l[j] 
                j-= 1
                k-=1
    
            k >>= 1
            for itr in range( k) : 
  
                left_product = l[i] * l[i + 1] 
 
                right_product = l[j] * l[j - 1] 
         
                if (left_product > right_product) : 
                    ans *= left_product 
                    i += 2
                
                else : 
                    ans *= right_product 
                    j -= 2
    print(ans)
t=int(input())
for _ in range(t):
    solution()