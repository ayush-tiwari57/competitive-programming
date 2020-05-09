def f(x):
        if(x==sorted(x)):
            return len(x)
        n = len(x)
        return max(f(x[:n//2]), f(x[n//2:]))
    
n = int(input())
x = list(map(int, input().split()))
print(f(x))