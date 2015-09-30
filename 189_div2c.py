x = raw_input()
MOD = 1000000000+7
n = len(x)
res = 0
for i in range(n):
  if x[i] == '0':
    continue
  res=(res+2**(n-1)*2**(n-i-1))%MOD
print res