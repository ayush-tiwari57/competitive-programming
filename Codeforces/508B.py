"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x=list(input())
    ind=-1
    for i in range(len(x)):
        if int(x[i])%2==0:
            # print(x[i])
            if int(x[i])<int(x[-1]):
                ind=i
                break
            else:
                ind=i
    if ind==-1:
        print(-1)
    else:
        # print(ind)
        y=x[-1]
        x[-1]=x[ind]
        x[ind]=y
        print(''.join(x))

            
t=1
for _ in range(t):
    solution()