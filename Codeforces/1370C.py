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
        flag=0
        cnt=0
        n=int(input())
        if n==1:
            print('FastestFinger')
        elif n%2!=0:
            print('Ashishgup')
        else:
            while n>=2:
                d=[]
                if n==1:
                    if cnt%2!=0:
                        print('Ashishgup')
                    else:
                        print('FastestFinger')
                    break
                if n%2==0:
                    for i in range(2,int(n**0.5)+1): 
                        if n%i==0:
                            y=n//i
                            if i%2!=0:
                                d.append(i)
                                flag=1
                            if y%2!=0:
                                d.append(y)
                    
                    if d==[]:
                        if n==2:
                            if cnt%2==0:
                                print('Ashishgup')
                            else:
                                print('FastestFinger')
                        elif cnt%2!=0:
                            print('Ashishgup')
                        else:
                            print('FastestFinger')
                        break
                    else:
                        d.sort()
                        ma=d[-1]
                        m=d[len(d)-2]
                        # print(ma,m)
                        if n//ma==2:
                            n//=m
                            # print(n)
                        else:
                            n//=ma
                            # print(n)
                    cnt+=1
                else:
                    if cnt%2==0:
                        print('Ashishgup')
                    else:
                        print('FastestFinger')
                    break
solution()