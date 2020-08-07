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
    s=list(input())
    zero=[]
    one=[]
    ans=0
    grp=0
    grparr=[]
    for i in range(n):
        if s[i]=='0':
            if one!=[]:
                zero.append(one[-1])
                one.pop()
                grparr.append(zero[-1])
            else:
                grp+=1
                ans+=1
                zero.append(grp)
                grparr.append(grp)
        else:
            if zero!=[]:
                one.append(zero[-1])
                grparr.append(one[-1])
                zero.pop()
            else:
                ans+=1
                grp+=1
                one.append(grp)
                grparr.append(grp)    
    print(ans)
    print(*grparr)

t=int(input())
for _ in range(t):
    solution()