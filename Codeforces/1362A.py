"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline
import math
def solution():
    for _ in range(int(input())):
        
        # This is the main code
        a,b=map(int,input().split())
        if a==b:
            print(0)
        else:
            z=(a*b)//math.gcd(a,b)
            cnt=0
            x=z//a
            y=z//b
            flag=0
            # print(x,y)
            while x!=1:
                if x%8==0:
                    x//=8
                elif x%4==0:
                    x//=4
                elif x%2==0:
                    x//=2
                else:   
                    flag=1
                    break
                cnt+=1
            while y!=1:
                if y%8==0:
                    y//=8
                elif y%4==0:
                    y//=4
                elif y%2==0:
                    y//=2
                else:
                    flag=1
                    break
                cnt+=1
            if flag==1:
                print(-1)
            else:
                print(cnt)
            
solution()