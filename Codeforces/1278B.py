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
        a,b=map(int,input().split())
        if a<b:
            a,b=b,a
        k=0
        while True:
            if (k*(k+1))//2>=a-b and (a-b)%2==((k*(k+1))//2)%2:
                print(k)
                break
            k+=1

solution()