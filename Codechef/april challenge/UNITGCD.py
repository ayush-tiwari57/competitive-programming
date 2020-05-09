"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
def solution():
    
    # This is the main code

    n=int(input())
    if n==1:
        print(1)
        print(1,1)
        return
    print(n//2)
    if n%2!=0:
        print(3,1,2,3)
        x=4
    else:
        print(2,1,2)
        x=3
    for i in range(1,n//2):
        print(2,x,x+1)
        x+=2



for _ in range(int(input())):
    solution()