"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        i=0
        j=0
        ans=[]
        while i<n-1:
            if l[i+1]>l[i]:
                while i<n-1 and l[i+1]>l[i]:
                    i+=1
                ans.append(l[j])
                j=i
            else:
                while i<n-1 and l[i+1]<l[i]:
                    i+=1
                ans.append(l[j])
                j=i
        ans.append(l[j])
        print(len(ans))
        print(*ans)

solution()