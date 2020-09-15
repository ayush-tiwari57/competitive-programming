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
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    arr=[]
    arr2=[]
    for i in range(n):
        arr.append([a[i],b[i]])
        if b[i]==0:
            arr2.append([a[i],b[i]])
    arr2.sort(reverse=True)
    # print(arr2)
    i=0
    j=0
    while i<len(arr2):
        while j<len(arr) and i<len(arr2):
            if arr[j][1]==0:
                arr[j][0]=arr2[i][0]
                i+=1
            j+=1
    for i in range(n):
        print(arr[i][0],end=' ')
    print()

t=int(input())
for _ in range(t):
    solution()