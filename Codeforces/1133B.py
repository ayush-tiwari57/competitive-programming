n,k = map(int,input().split())
    
    
A = [0 for i in range(k)]
    
    
answer = 0
for i in input().split(" "):
    if A[(-int(i))%k] >0:
        answer += 2
        A[(-int(i))%k] -=1
    else:
        A[int(i)%k] +=1
    
print(answer)