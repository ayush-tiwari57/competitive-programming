"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
#import sys
#input = sys.stdin.buffer.readline

import os, sys
from io import IOBase, BytesIO
py2 = round(0.5)
if py2:
    from future_builtins import ascii, filter, hex, map, oct, zip
    range = xrange
BUFSIZE = 8192
class FastIO(BytesIO):
    newlines = 0
 
    def __init__(self, file):
        self._file = file
        self._fd = file.fileno()
        self.writable = "x" in file.mode or "w" in file.mode
        self.write = super(FastIO, self).write if self.writable else None
 
    def _fill(self):
        s = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
        self.seek((self.tell(), self.seek(0,2), super(FastIO, self).write(s))[0])
        return s
 
    def read(self):
        while self._fill(): pass
        return super(FastIO,self).read()
 
    def readline(self):
        while self.newlines == 0:
            s = self._fill(); self.newlines = s.count(b"\n") + (not s)
        self.newlines -= 1
        return super(FastIO, self).readline()
 
    def flush(self):
        if self.writable:
            os.write(self._fd, self.getvalue())
            self.truncate(0), self.seek(0)
 
class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        if py2:
            self.write = self.buffer.write
            self.read = self.buffer.read
            self.readline = self.buffer.readline
        else:
            self.write = lambda s:self.buffer.write(s.encode('ascii'))
            self.read = lambda:self.buffer.read().decode('ascii')
            self.readline = lambda:self.buffer.readline().decode('ascii')
 
 
sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip('\r\n')
 
# Cout implemented in Python
import sys
class ostream:
    def __lshift__(self,a):
        sys.stdout.write(str(a))
        return self
cout = ostream()
endl = '\n'


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