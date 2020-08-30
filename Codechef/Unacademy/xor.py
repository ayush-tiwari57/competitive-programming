"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

INT_BITS=32
def func(set,n): 
    index = 0
    for i in range(INT_BITS-1,-1,-1): 
        maxInd = index 
        maxEle = -2147483648
        for j in range(index,n):  
            if ( (set[j] & (1 << i)) != 0 
                     and set[j] > maxEle ): 
                  
                maxEle = set[j] 
                maxInd = j  
        if (maxEle ==-2147483648): 
            continue
        temp=set[index] 
        set[index]=set[maxInd] 
        set[maxInd]=temp 
   
        maxInd = index 
        for j in range(n): 
            if (j != maxInd and
               (set[j] & (1 << i)) != 0): 
                set[j] = set[j] ^ set[maxInd] 
           
        index=index + 1
    res = 0
    for i in range(n): 
        res =res ^ set[i] 
    return res

def solution():
    
    # This is the main code
    n=input()
    l=list(map(int,input().split()))
    print(func(l,len(l)))

t=1
for _ in range(t):
    solution()