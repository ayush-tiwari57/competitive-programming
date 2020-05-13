s1=s2=0
for i in range(101):
    s1+=i
    s2+=i*i
print(abs(s1*s1-s2))