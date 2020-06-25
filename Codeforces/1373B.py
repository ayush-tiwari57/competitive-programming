"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        s=list(input())
        cnt0=0
        cnt1=0
        for i in s:
            if i=='1':
                cnt1+=1
            else:
                cnt0+=1
        x=min(cnt1,cnt0)
        if x%2==0:
            print('NET')
        else:
            print('DA')


solution()