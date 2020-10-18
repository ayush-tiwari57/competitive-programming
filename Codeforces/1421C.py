"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    s=list(input())
    ans=4
    l=[]
    l.append(['R',str(2)])
    l.append(['L',str(2*len(s)-3)]) 
    x=2*(2*len(s)-2)-2
    y=x+2*len(s)-3
    l.append(['R',str(2*len(s)-3)])
    z=y-(2*len(s)-4)
    l.append(['R',str(z)])
    print(ans)
    for i in range(4):
        print(l[i][0],l[i][1])



    
t=1
for _ in range(t):
    solution()