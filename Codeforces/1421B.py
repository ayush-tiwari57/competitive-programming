"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=[]
    for i in range(n):
        a=list(input())
        l.append(a)
    ans=[]
    if l[1][0]==l[0][1]:
        if l[n-2][n-1]==l[1][0]:
            ans.append([n-1,n])
        if l[n-1][n-2]==l[1][0]:
            ans.append([n,n-1])
    elif l[n-1][n-2]==l[n-2][n-1]:
        if l[1][0]==l[n-2][n-1]:
            ans.append([2,1])
        if l[0][1]==l[n-1][n-2]:
            ans.append([1,2])
    else:
        if l[1][0]==l[n-1][n-2]:
            ans.append([n,n-1])
        if l[1][0]==l[n-2][n-1]:
            ans.append([n-1,n])
        ans.append([1,2])
    print(len(ans))
    for i in range(len(ans)):
        print(ans[i][0],ans[i][1])
               
    
t=int(input())
for _ in range(t):
    solution()