"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    
    # This is the main code
    s=list(input())
    ans=0
    for i in range(10):
        for j in range(10):
            x=0
            cnt=0
            for k in s:
                if(x==0 and str(i)==k):
                    x=1-x
                    cnt+=1
                elif x==1 and str(j)==k:
                    x=1-x
                    cnt+=1
            if cnt%2==0 or i==j:
                ans=max(ans,cnt)
    print(len(s)-ans)


t=int(input())
for _ in range(t):
    solution()