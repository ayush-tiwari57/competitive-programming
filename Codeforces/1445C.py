import sys
input = sys.stdin.buffer.readline    
 
def solution():
    
    # This is the main code
    p,q=map(int,input().split())
    d={}
    n=q
    if p%q!=0:
        print(p)
    else:
        while n % 2 == 0: 
            d[2]=d.get(2,0)+1
            n = n // 2
 
        for i in range(3,int(n**0.5)+1,2): 
            
            while n % i== 0: 
                d[i]=d.get(i,0)+1
                n = n //i 
                
        if n > 2: 
            d[n]=d.get(n,0)+1
        
        m=-2e18
        for i in d:
            x=p
            cnt=0
            while x%(i)==0:
                x//=(i)
                if x%q!=0:
                    m=max(m,x)
        print(int(m))
t=int(input())
for _ in range(t):
    solution()