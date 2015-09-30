def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)

def power(a,b):
	if b==1:
		return a
	if b==0:
		return 1
	if b&1==0:
		ans =power(a,b>>1)*power(a,b>>1)
	elif b&1:
		ans =power(a,b>>1)*power(a,b>>1)*a
	return ans

n,x=map(int,raw_input().split())
list1=map(int,raw_input().split())
mod1=power(10,9)+7
#print mod1
den1 = power(x,sum(list1))
#print den1
#print pow(2,58)%mod1
#print sum(list1)%mod1
num1 = 0
for p in xrange(0,len(list1)):
	#print "hello"
	num1+= (den1//power(x,list1[p]))
#print den1,num1
print gcd(den1,num1)%mod1