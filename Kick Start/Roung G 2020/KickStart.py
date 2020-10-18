for t in range(int(input())):
    s=input()
    cnt1=0
    cnt2=0
    n=len(s)
    for i in range(n):
        if s[i:i+4]=="KICK":
            cnt1+=1
        if s[i:i+5]=="START":
            cnt2+=1
    ans=0
    i=0
    while i<n:
        if s[i:i+4]=="KICK":
            ans+=cnt2
        if s[i:i+5]=="START":
            cnt2-=1
        i+=1
    print('CASE #'+str(t+1)+':',ans)
        
