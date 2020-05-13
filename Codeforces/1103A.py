s=input()
twos=0
fours=0
for i in s:
    if i=='0':
        if twos==1:
            print(3,1)
            twos=0
        else:
            print(1,1)
            twos=1
    else:
        print(fours+1,2)
        fours+=1
        fours%=4