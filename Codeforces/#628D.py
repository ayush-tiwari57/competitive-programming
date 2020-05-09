u, v=map(int, input(). split()) 
if u>v or u&1!=v&1:
    print(-1)
elif v==u and u==0:
    print(0) 
elif v==u:
    print(1)
    print(u) 
else:
    r=(v-u) //2
    if r&u:
        print(3) 
        print(u, r, r) 
    else:
        print(2) 
        print(u^r, r) 