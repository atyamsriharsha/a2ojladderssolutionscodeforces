s=raw_input()
n=len(s)
PrimeNumbers = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,  
    71,73,79,83,89,97,101,103,107,109,113,
    127,131,137,139,149,151,157,163,167,173,
    179,181,191,193,197,199,211,223,227,229,
    233,239,241,251,257,263,269,271,277,281,
    283,293,307,311,313,317,331,337,347,349,
    353,359,367,373,379,383,389,397,401,409,
    419,421,431,433,439,443,449,457,461,463,
    467,479,487,491,499]

t = [False]*(n+1)
for i in range(1,n+1):
  for x in PrimeNumbers:
    if 2*x<=n:
      if i%x==0:
        t[i] = True

k = sum(t)
found = False
for x in s:
  if s.count(x)>=k:
    s = s.replace(x,'',k)
    j=0
    for i in range(1,n+1):
      if t[i]:
        t[i] = x
      else:
        t[i] = s[j]
        j += 1
    print 'YES'
    print ''.join(t[1:])
    found = True
    break
    
if not found:
  print 'NO'