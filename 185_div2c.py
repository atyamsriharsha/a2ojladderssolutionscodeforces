n,k = map(int,raw_input().split())
if k >= n*(n-1)/2:
  print 'no solution'
else:
  for i in xrange(n):
    print 0,i