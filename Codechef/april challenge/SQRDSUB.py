"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n=int(input())
    a=list(map(int,input().split()))
    sum= 0
    leftcnt=rightcnt=evencnt=0
    for i in range(n): 
        if a[i]%2!=0:
            if evencnt==0:
                leftcnt+=1
            else:
                rightcnt+=1
        if a[i]%4==0:
            sum+=rightcnt*(leftcnt+1)
            leftcnt=rightcnt=0
            evencnt=0
        if a[i]%4==2:
            if evencnt==1:
                sum+=rightcnt*(leftcnt+1)
                leftcnt=rightcnt
                rightcnt=0
                evencnt=0
            sum+=leftcnt+1
            evencnt+=1
            
        if evencnt==1 and i==n-1:
            sum+=rightcnt*(leftcnt+1)

    x=(n*(n+1))//2
    print(x-sum)  

for _ in range(int(input())):
    solution()