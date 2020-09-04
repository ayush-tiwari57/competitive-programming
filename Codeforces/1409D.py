"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,s=map(int,input().split())
    x=n
    l=[]
    while x>0:
        l.append(x%10)
        x//=10
    i=-1
    x=0
    l.reverse()
    while i+1<len(l) and l[i+1]+x<=s:
        x+=l[i+1]
        i+=1
    # print(i) 
    if l[0]==s and len(l)>1:
        num=0
        num+=(l[0]+1)*10**(len(l))
        print(num-n)
    elif i==-1:
        print(10**(len(l))-n)
    else:
        
        if i==len(l)-1:
            print(0)
        else:
            i-=1
            j=0
            p=len(l)
            num=0
            while j!=i:
                num+=(l[j])*(10**p)
                p-=1
                j+=1
            num+=((l[j]+1)*(10**p))
            num//=10
            print(num-n)
        

t=int(input())
for _ in range(t):
    solution()