"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    
    # This is the main code
    s=list(input())
    x=int(input())
    n=len(s)
    flag=0
    l=['2']*n
    for i in range(n):
        p=i-x
        q=i+x
        if (p<0 and q>n-1):
            if s[i]=='1':
                flag=1 
                break       
        elif p<0:
            if s[i]=='1':
                if l[q]=='0':
                    flag=1
                    break
                l[q]='1'
            else:
                if l[q]=='1':
                    flag=1
                    break
                l[q]='0'
        elif q>n-1:
            if s[i]=='1':
                if l[p]=='0':
                    flag=1
                    break
                l[p]='1'
            else:
                if l[p]=='1':
                    flag=1
                    break
                l[p]='0'
        else:
            if s[i]=='0':
                if l[p]=='1' or l[q]=='1':
                    flag=1
                    break
                l[p]='0'
                l[q]='0'
            else:
                if l[p]=='0' and l[q]=='0':
                    flag=1
                    break
                elif l[p]=='0' and l[q]=='2':
                    l[q]='1'
                elif l[p]=='2' and l[q]=='0':
                    l[p]='1'
    if flag:
        print(-1)
    else:
        ans=''
        for i in range(n):
            if l[i]=='2':
                ans+='1'
            else:
                ans+=l[i]
        print(ans)
t=int(input())
for _ in range(t):
    solution()