"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
#import sys
#input = sys.stdin.buffer.readline

def binary_lower(value, arr, n): 
  
    start = 0
    end = n - 1
    ans = -1
  
    while (start <= end) : 
        mid = (start + end) // 2
        if (arr[mid] >= value) : 
            end = mid - 1
            ans = mid 
          
        else : 
            start = mid + 1
              
    return ans 
  
# Return the number of triplet  
# indices satisfies 
# the three constraints 
def countTriplet(arr, n, k): 
  
    count = 0
  
    # sort the array 
    arr.sort() 
  
    # for each element from  
    # index 2 to n - 1. 
    for i in range(2, n) : 
  
        # finding the lower bound  
        # of arr[i] - k. 
        cur = (binary_lower(arr[i] - k 
                            , arr, n)) 
  
        # If there are at least  
        # two elements between 
        # lower bound and current element. 
        if (cur <= i - 2) : 
  
            # increment the count by  
            # lb - i C 2. 
            count += ((i - cur) * 
                     (i - cur - 1)) // 2
  
    return count 
def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    print(countTriplet(l, n, 2)) 

t=int(input())
for _ in range(t):
    solution()