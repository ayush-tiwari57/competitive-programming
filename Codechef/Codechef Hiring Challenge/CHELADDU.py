    """
    Code of Ayush Tiwari
    Codeforces: servermonk
    Codechef: ayush572000

    """
    import sys
    input = sys.stdin.buffer.readline

    def solution():
        
        # This is the main code
        n,k=map(int,input().split())
        l=list(map(int,input().split()))
        l.sort()
        i=0
        j=k-1
        ans=l[j]-l[i]
        while j<n:
            ans=min(ans,l[j]-l[i])
            i+=1
            j+=1
        print(ans)
        
    t=int(input())
    for _ in range(t):
        solution()