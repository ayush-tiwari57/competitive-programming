t = int(input())
for i in range(t):
   n, m = map(int, input().split())
   s = input()
   scoreinitial = 0
   if s[0] == 'W':
      scoreinitial += 1
   for i in range(1, len(s)):
      if s[i] == 'W' and s[i-1] == 'W':
         scoreinitial += 2
      elif s[i] == 'W':
         scoreinitial += 1
   paq = []
   cuts = s.split('W')
   extr = [len(x) for x in cuts]
   nbL = sum(extr)
   stock = min(m, nbL)
   if stock == 0:
      print(scoreinitial)
   elif nbL < n:
      paq = sorted(extr[1:-1])
      #print(paq)
      rep = 0
      for i in paq:
         if i <= stock and i > 0:
            rep += i*2 + 1
            stock -= i
      rep += 2*stock
      print(rep+scoreinitial)
   else:
      print(stock*2-1)
